module CSR (
    input clk,
    input [32-1:0] wdata[5:0],
    input [6-1:0] wen,
    output [32-1:0] data[5:0]
);
  reg [32-1:0] rf[5:0];
  assign data = rf;
  /*
	0  mstatus
	1  mepc
	2  mcause
	5  mtvec
*/
  always @(posedge clk) begin
    if (wen[0]) begin
      //$display("write :waddr:%d,wdata:%8x", waddr, wdata);
      rf[0] <= wdata[1];
      //$strobe("rf[%d]:%8x", waddr, rf[waddr]);
    end
    if (wen[1]) begin
      rf[1] <= wdata[1];
    end
    if (wen[2]) begin
      rf[2] <= wdata[2];
    end
    if (wen[3]) begin
      rf[3] <= wdata[3];
    end
    if (wen[4]) begin
      rf[4] <= wdata[4];
    end
    if (wen[5]) begin
      rf[5] <= wdata[5];
    end
  end
endmodule
