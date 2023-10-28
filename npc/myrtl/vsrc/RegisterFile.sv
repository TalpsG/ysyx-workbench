module RegisterFile (
    input clk,
    input [32-1:0] wdata,
    input [5-1:0] waddr,
    output [32-1:0] data[32-1:0],
    input wen
);
  reg [32-1:0] rf[32-1:0];
  assign data = rf;

  always @(posedge clk) begin
    //$display("waddr:%d,wdata:%8x,wen:%d", waddr, wdata, wen);
    if (wen) begin
      //$display("write :waddr:%d,wdata:%8x", waddr, wdata);
      rf[waddr] <= wdata;
      rf[0] <= '0;
      //$strobe("rf[%d]:%8x", waddr, rf[waddr]);
    end
  end
endmodule
