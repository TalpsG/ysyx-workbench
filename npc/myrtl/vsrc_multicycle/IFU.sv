`include "/home/talps/gitrepo/ysyx-workbench/npc/myrtl/vsrc_multicycle/utils.sv"
module IFU #(
    WIDTH = 32
) (
    input clk,
    input rst,
    input [WIDTH-1:0] in,
    input idu_ready,
    output [WIDTH-1:0] out,
    output reg [31:0] ins,
    output reg ifu_valid,

    output reg [31:0] ifu_araddr,
    output reg ifu_arvalid,
    input [31:0] ifu_rdata,
    input ifu_rvalid,
    input [1:0] ifu_rresp,
    output reg ifu_rready

);


  reg [31:0] pc;
  assign out = pc;
  import "DPI-C" function void fetch(
    input  int in,
    output int ins
  );



  always @(posedge clk) begin
    if (ifu_rvalid) ins <= ifu_rdata;
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
  always @(posedge clk) begin
    if (rst) begin
      pc <= 32'h80000000 - 32'h4;
      ifu_arvalid <= 0;
      ifu_rready <= 0;
      ifu_valid <= 0;
      state <= `IFU_FETCH;
    end else begin
      case (state)
        `IFU_FETCH: begin
          pc <= in;
          //delay <= $random & 32'h0000001f;
          ifu_araddr <= in;
          state <= `IFU_WAIT_MEM;
          ifu_arvalid <= 1;
          ifu_rready <= 1;
        end
        `IFU_WAIT_MEM: begin
          if (ifu_rvalid) begin
            ins <= ifu_rdata;
            ifu_arvalid <= 0;
            ifu_rready <= 0;
            ifu_araddr <= 0;
            ifu_valid <= 1;
            state <= `IFU_WAIT_MEM;
          end
          if (idu_ready) begin
            state <= `IFU_FETCH;
          end
        end
        default: state <= `IFU_FETCH;
      endcase
    end
  end
  always @(posedge clk) begin
    if (ifu_valid) ifu_valid <= 0;
  end




endmodule
