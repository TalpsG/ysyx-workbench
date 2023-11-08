module RegisterFile (
    input clk,
    input [32-1:0] wdata,
    input [5-1:0] waddr,
    raddr1,
    raddr2,
    input wen,
    ren1,
    ren2,
    output [32-1:0] data[32-1:0],
    output [31:0] rdata1,
    rdata2

);
  reg [32-1:0] rf[32-1:0];
  assign data = rf;
  always @(posedge clk) begin
    if (wen) begin
      //$display("waddr:%d wdata:%8x", waddr, wdata);
      rf[waddr] <= wdata;
    end
    rf[0] <= 32'h0;
  end
  assign rdata1 = ren1 ? rf[raddr1] : 32'h0;
  assign rdata2 = ren2 ? rf[raddr2] : 32'h0;
endmodule
