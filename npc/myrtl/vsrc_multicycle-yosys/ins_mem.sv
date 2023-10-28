module ins_mem (
    input clk,
    input [32-1:0] raddr,
    input ren,
    output reg [31:0] rdata

);
  reg [32-1:0] rf[256-1:0];
  always @(*) begin
    if (ren) begin
      rdata = rf[raddr[7:0]];
    end else rdata = 32'h0;
  end
endmodule
