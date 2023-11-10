`include "/home/talps/gitrepo/ysyx-workbench/npc/myrtl/vsrc_multicycle/utils.sv"
module IFU #(
    WIDTH = 32
) (
    input clk,
    input rst,
    input [WIDTH-1:0] in,
    input ready,
    output [WIDTH-1:0] out,
    output reg [31:0] ins,
    output reg valid

);

  reg [31:0] pc;
  assign out = pc;
  import "DPI-C" function void fetch(
    input  int in,
    output int ins
  );


  reg [31:0] araddr;
  reg arvalid;
  wire arready;
  wire [31:0] rdata;
  wire rvalid;
  wire [1:0] rresp;
  reg rready;

  always @(posedge clk) begin
    if (rvalid) ins <= rdata;
  end


  /*
  *
  * 读事务依赖
  * 1. arvalid 不能依赖 arready
  * 2. arready 可以依赖arvalid
  * 3. arready 可以先与 arvalid 有效
  * 4. rvalid 必须依赖arready和arvalid
  * 5. rvalid 不能依赖 rready
  * 6. rready 可以依赖 rvalid
  * 7. rready 可以先与 rvalid 有效
  *
  *
  */

  reg [1:0] state;
  reg [31:0] delay, now;
  always @(posedge clk) begin
    if (rst) begin
      pc <= 32'h80000000 - 32'h4;
      arvalid <= 0;
      rready <= 0;
      valid <= 0;
      delay <= $random & 32'h0000001f;
      now <= 0;
      state <= `IFU_FETCH;
    end else begin
      case (state)
        `IFU_FETCH: begin
          pc <= in;
          delay <= $random & 32'h0000001f;
          araddr <= in;
          now <= 0;
          state <= `IFU_WAIT_DELAY;
        end
        `IFU_WAIT_DELAY: begin
          if (delay == now) begin
            arvalid <= 1;
            rready <= 1;
            state <= `IFU_WAIT_MEM;
            now <= 0;
          end else begin
            now <= now + 1;
          end
        end
        `IFU_WAIT_MEM: begin
          if (rvalid) begin
            ins <= rdata;
            arvalid <= 0;
            rready <= 0;
            araddr <= 0;
            valid <= 1;
            state <= `IFU_WAIT_MEM;
          end
          if (ready) begin
            state <= `IFU_FETCH;
          end
        end
        default: state <= `IFU_FETCH;
      endcase
    end
  end
  always @(posedge clk) begin
    if (valid) valid <= 0;
  end


  INS_MEM u_INS_MEM (
      .clk    (clk),
      .rst    (rst),
      .araddr (araddr),
      .arvalid(arvalid),
      .arready(arready),
      .rdata  (rdata),
      .rvalid (rvalid),
      .rresp  (rresp),
      .rready (rready),
      .awaddr (0),
      .awvalid(0),
      .awready(),
      .wdata  (0),
      .wstrb  (0),
      .wvalid (0),
      .wready (),
      .bresp  (),
      .bvalid (),
      .bready (0)
  );



endmodule
