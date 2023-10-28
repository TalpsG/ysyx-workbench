module IFU #(
    WIDTH = 32
) (
    input clk,
    input [WIDTH-1:0] in,
    output reg [WIDTH-1:0] out,
    output reg [31:0] ins
);
  PC pc (
      .clk(clk),
      .in (in),
      .out(out)
  );
  import "DPI-C" function void fetch(
    input  int in,
    output int ins
  );
  always @(posedge clk) begin
    fetch(in, ins);
  end


endmodule
