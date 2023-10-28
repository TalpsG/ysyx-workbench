module PC (
    input clk,
    input [32-1:0] in,
    output reg [32-1:0] out
);
  always @(posedge clk) begin
    out <= in;
  end
endmodule
