module CSR (
    input clk,
    input [32-1:0] wdata0,
    wdata1,
    wdata2,
    wdata3,
    wdata4,
    wdata5,
    input [6-1:0] wen,
    output [32-1:0] rdata0,
    rdata1,
    rdata2,
    rdata3,
    rdata4,
    rdata5
);
  reg [32-1:0] rf[5:0];
  assign rdata0 = rf[0];
  assign rdata1 = rf[1];
  assign rdata2 = rf[2];
  assign rdata3 = rf[3];
  assign rdata4 = rf[4];
  assign rdata5 = rf[5];
  /*
	0  mstatus
	1  mepc
	2  mcause
	5  mtvec
*/
  always @(posedge clk) begin
    //$display("wen:%x,wdata0:%x 1:%x 2:%x 3:%x 4:%x 5:%x", wen, wdata[0], wdata[1], wdata[2], wdata[3], wdata[4], wdata[5]);
    if (wen[0]) begin
      //$display("write :waddr:%d,wdata:%8x", waddr, wdata);
      rf[0] <= wdata0;
      //$strobe("rf[%d]:%8x", waddr, rf[waddr]);
    end
    if (wen[1]) begin
      rf[1] <= wdata1;
    end
    if (wen[2]) begin
      rf[2] <= wdata2;
    end
    if (wen[3]) begin
      rf[3] <= wdata3;
    end
    if (wen[4]) begin
      rf[4] <= wdata4;
    end
    if (wen[5]) begin
      //$display("write mtvec");
      rf[5] <= wdata5;
    end
  end
endmodule
