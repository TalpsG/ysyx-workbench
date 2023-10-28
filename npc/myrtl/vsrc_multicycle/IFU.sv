module IFU #(
    WIDTH = 32
) (
    input clk,
    input rst,
    input [WIDTH-1:0] in,
    output [WIDTH-1:0] out,
    output [31:0] ins

);
  reg [31:0] pc;
  assign out = pc;
  import "DPI-C" function void fetch(
    input  int in,
    output int ins
  );
  always @(posedge clk) begin
    if (rst) begin
      pc <= 32'h80000000 - 32'h4;
      //$display("rst");
    end else begin
      pc <= in;
      fetch(in, ins);
    end
  end




endmodule
