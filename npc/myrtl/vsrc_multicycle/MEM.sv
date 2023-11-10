`include "/home/talps/gitrepo/ysyx-workbench/npc/myrtl/vsrc_multicycle/utils.sv"
module MEM (
    input clk,
    input rst,
    input read,
    input wen,
    input [2:0] readop,


    input mem_awvalid,
    output reg mem_awready,
    input [31:0] mem_awaddr,

    input mem_wvalid,
    input [7:0] mem_wstrb,
    input [31:0] mem_wdata,
    output reg mem_wready,

    output reg mem_bvalid,
    input mem_bready,
    output reg [1:0] mem_bresp,

    input mem_arvalid,
    output reg mem_arready,
    input [31:0] mem_araddr,

    output reg mem_rvalid,
    input mem_rready,
    output reg [1:0] mem_rresp,
    output [31:0] mem_rdata



);
  reg  [ 1:0] pos;
  reg  [ 7:0] mem_wstrb_reg;
  reg  [31:0] rdata_w;
  reg  [31:0] mem_araddr_reg;
  wire [ 7:0] rdata_b;
  wire [15:0] rdata_h;


  import "DPI-C" function void npc_mem_read(
    input  int raddr,
    output int rdata
  );
  import "DPI-C" function void npc_mem_write(
    input int  awaddr,
    input int  wdata,
    input byte wstrb
  );
  /*
  * 
  * 1. mem_awvalid mem_wvalid 不可以依赖 mem_awready mem_wready
  * 2. mem_awready mem_wready 可以依赖 mem_awvalid mem_wvalid
  * 3. mem_awready 可以在 mem_awvalid 和mem_wvalid 之前有效
  * 4. mem_wready 可以等待mem_awvalid 和mem_wvalid 也可以在他们之前有效
  * 5. bvalid 必须等待mem_wvalid 和mem_wready
  * 6. bresp 必须 在最后一个数据传授后有效
  * 7. bvalid 必须等待bready
  * 8. bready 可以等待bvalid
  * 9. bready 可以在bvalid 前有效 
  *
  */

  reg write_flag;
  reg read_flag;
  reg [31:0] write_now, write_delay;
  reg [31:0] read_now, read_delay;
  reg [1:0] write_state, read_state;
  reg [31:0] mem_wdata_reg;
  reg [31:0] mem_awaddr_reg;


  always @(posedge clk) begin
    if (rst) begin
      mem_arready <= 1;
      mem_rvalid  <= 0;
      mem_awready <= 1;
      mem_wready  <= 1;
      mem_rresp   <= 0;
      mem_bvalid  <= 0;
      mem_bresp   <= 0;
      rdata_w = 0;

      write_now <= 0;
      write_delay <= 0;
      read_delay <= 0;
      read_now <= 0;

      write_state <= `MEM_WAIT_REQ;
      read_state <= `MEM_WAIT_REQ;

    end else begin

      case (read_state)
        `MEM_WAIT_REQ: begin
          if (~mem_rvalid && mem_arvalid && mem_arready && mem_rready) begin
            mem_araddr_reg <= mem_araddr;
            pos <= mem_araddr[1:0];
            read_state <= `MEM_WAIT_RES;

            //读取的时候把ready都置为0
            mem_arready <= 0;
          end else begin
            mem_rvalid <= 0;
          end
        end
        `MEM_WAIT_RES: begin
          if (read_delay == read_now) begin
            read_now   <= 0;
            read_delay <= $random & 32'h0000001f;
            npc_mem_read(mem_araddr_reg, rdata_w);
            mem_rvalid  <= 1;
            mem_arready <= 1;
            mem_rresp   <= 0;
            read_state  <= `MEM_WAIT_REQ;
          end else begin
            read_now   <= read_now + 1;
            mem_rvalid <= 0;
          end
        end
        default: begin
          read_state <= `MEM_WAIT_REQ;

        end
      endcase
      case (write_state)
        `MEM_WAIT_REQ: begin
          if(~mem_bvalid && mem_wvalid && mem_wready
			 && mem_awready && mem_awvalid && mem_bready ) begin
            write_state <= `MEM_WAIT_RES;
            mem_wdata_reg <= mem_wdata;
            mem_awaddr_reg <= mem_awaddr;
            mem_wstrb_reg <= mem_wstrb;
          end else begin
            mem_bvalid <= 0;
            mem_bresp  <= 0;
          end
        end
        `MEM_WAIT_RES: begin
          if (write_delay == write_now) begin
            write_delay <= $random & 32'h0000001f;
            write_now   <= 0;
            mem_bvalid  <= 1;
            npc_mem_write(mem_awaddr_reg, mem_wdata_reg, mem_wstrb_reg);
            mem_bresp   <= 0;
            write_state <= `MEM_WAIT_REQ;
          end else begin
            write_now <= write_now + 1;
          end
        end
        default: write_state <= `MEM_WAIT_REQ;
      endcase

    end

  end
  //mem_wready 












  MuxKey #(
      .NR_KEY  (4),
      .KEY_LEN (2),
      .DATA_LEN(8)
  ) get_rdata_b (
      .out(rdata_b),
      .key(pos),
      .lut({2'h0, rdata_w[7:0], 2'h1, rdata_w[15:8], 2'h2, rdata_w[23:16], 2'h3, rdata_w[31:24]})
  );
  MuxKey #(
      .NR_KEY  (3),
      .KEY_LEN (2),
      .DATA_LEN(16)
  ) get_rdata_h (
      .out(rdata_h),
      .key(pos),
      .lut({2'h0, rdata_w[15:0], 2'h1, rdata_w[23:8], 2'h2, rdata_w[31:16]})
  );
  MuxKey #(
      .NR_KEY  (5),
      .KEY_LEN (3),
      .DATA_LEN(32)
  ) get_rdata (
      .out(mem_rdata),
      .key(readop),
      .lut({
        3'h0,
        {{24{rdata_b[7]}}, rdata_b},
        3'h1,
        {{16{rdata_h[15]}}, rdata_h},
        3'h2,
        rdata_w,
        3'h4,
        {{24{1'b0}}, rdata_b},
        3'h5,
        {{16{1'b0}}, rdata_h}
      })
  );

endmodule
