module RegisterFile (
    input clk,
    input [32-1:0] wdata,
    input [5-1:0] waddr,
    raddr1,
    raddr2,
    input wen,
    ren1,
    ren2,
    //output [32-1:0] data[32-1:0],
    output reg [31:0] rdata1,
    rdata2

);
  reg [32-1:0] rf[32-1:0];
  //assign data = rf;
  always @(posedge clk) begin
    if (wen) begin
      rf[waddr] <= wdata;
    end
    rf[0] <= 32'h0;
  end
  always @(*) begin
    if (ren1) begin
      rdata1 = rf[raddr1];
    end else rdata1 = 32'h0;
  end
  always @(*) begin
    if (ren2) begin
      rdata2 = rf[raddr2];
    end else rdata2 = 32'h0;
  end
endmodule
