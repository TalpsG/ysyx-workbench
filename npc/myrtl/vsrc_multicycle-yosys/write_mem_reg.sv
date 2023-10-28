module write_mem_reg (

    input clk,
    input [32-1:0] wdata,
    input [32-1:0] waddr,
    raddr,
    input wen,
    ren,
    //output [32-1:0] data[32-1:0],
    output reg [31:0] rdata

);
  reg [32-1:0] rf[256-1:0];
  //assign data = rf;
  always @(posedge clk) begin
    if (wen) begin
      rf[waddr[7:0]] <= wdata;
    end
    rf[0] <= 32'h0;
  end
  always @(*) begin
    if (ren) begin
      rdata = rf[raddr[7:0]];
    end else rdata = 32'h0;
  end
endmodule
