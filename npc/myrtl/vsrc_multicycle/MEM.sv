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
  reg  [31:0] rdata_w;
  reg  [31:0] mem_araddr_reg;
  reg  [31:0] rdata_reg;
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
  reg [31:0] write_now, write_delay;
  //mem_awready
  always @(posedge clk) begin
    if (rst) begin
      mem_awready <= 1;
      write_flag  <= 0;
    end else if (mem_awready && mem_awvalid) begin
      mem_awready <= 0;
    end else begin
      mem_awready <= 1;
    end
  end

  //mem_wready 
  always @(posedge clk) begin
    if (rst) begin
      mem_wready <= 1;
    end else if (mem_wready && mem_wvalid) begin
      mem_wready <= 0;
    end else begin
      mem_wready <= 1;
    end
  end
  //wdata 
  //always @(posedge clk) begin
  //if (~write_flag && mem_wvalid && mem_wready && mem_awready && mem_awvalid) begin
  //npc_mem_write(mem_awaddr, mem_wdata, mem_wstrb);
  //end
  //end
  //bvalid bresp
  always @(posedge clk) begin
    if (rst) begin
      mem_bresp  <= 0;
      mem_bvalid <= 0;
    end else if (~write_flag && mem_bready && mem_wvalid && mem_wready && mem_awvalid && mem_awready) begin
      npc_mem_write(mem_awaddr, mem_wdata, mem_wstrb);
      write_flag <= 1;
      mem_bresp  <= 0;
    end
  end
  always @(posedge clk) begin
    if (rst) begin
      write_delay <= $random & 32'h0000001f;
      write_now   <= 0;
    end else if (write_flag) begin
      if (write_now == write_delay) begin
        mem_bvalid <= 1;
        write_flag <= 0;
        write_now  <= 0;
      end else begin
        write_now <= write_now + 1;
      end
    end

  end
  //raddr ready
  always @(posedge clk) begin
    if (rst) begin
      mem_arready <= 1;
    end else if (mem_arready && mem_arvalid) begin
      mem_arready <= 0;
    end else begin
      mem_arready <= 1;
    end
  end
  //raddr 
  //rdata 
  reg read_flag;
  always @(posedge clk) begin
    if (rst) begin
      rdata_w <= 0;
      rdata_reg = 0;
      read_flag  <= 0;
      read_delay <= $random & 32'h0000001f;
    end else if (~read_flag && ~mem_rvalid && mem_arvalid && mem_arready) begin
      npc_mem_read(mem_araddr, rdata_reg);
      mem_araddr_reg <= mem_araddr;
      pos <= mem_araddr[1:0];
      read_flag <= 1;
      mem_rresp <= 0;
    end else if (mem_rvalid) begin
      mem_rvalid <= 0;
      mem_rresp <= 0;
      read_flag <= 0;
      read_now <= 0;
      rdata_w <= 0;
    end
  end

  reg [31:0] read_now, read_delay;
  always @(posedge clk) begin
    if (read_flag) begin
      if (read_now == read_delay) begin
        read_now <= 0;
        mem_rvalid <= 1;
        rdata_w <= rdata_reg;
      end else begin
        read_now <= read_now + 1;
        rdata_w  <= 0;
      end
    end
  end
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
