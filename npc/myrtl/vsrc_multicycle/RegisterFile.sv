module RegisterFile (
    input clk,
    input [32-1:0] wdata,
    input [5-1:0] waddr,
    input [5-1:0] raddr1,
    input [5-1:0] raddr2,
    input wen,
    input ren1,
    input ren2,
    output [32-1:0] data[32-1:0],
    output reg [31:0] rdata1,
    output reg [31:0] rdata2

);
  reg [32-1:0] rf[32-1:0];
  assign data = rf;
  always @(posedge clk) begin
    if (wen) begin
      //$display("waddr:%d wdata:%8x", waddr, wdata);
      rf[waddr] <= wdata;
    end
    rf[0]  <= 32'h0;
    rdata1 <= rf[raddr1];
    rdata2 <= rf[raddr2];
  end
endmodule
