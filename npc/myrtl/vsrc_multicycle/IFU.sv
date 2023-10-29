module IFU #(
    WIDTH = 32
) (
    input clk,
    input rst,
    input [WIDTH-1:0] in,
    input ready,
    output [WIDTH-1:0] out,
    output [31:0] ins,
    output reg valid

);
  reg [31:0] pc, ins_reg;
  wire [31:0] ins_temp;
  assign ins = ins_reg;
  assign out = pc;
  import "DPI-C" function void fetch(
    input  int in,
    output int ins
  );
  always @(posedge clk) begin
    if (rst) begin
      pc <= 32'h80000000 - 32'h4;
      //$display("rst");
    end else if ((~valid)) begin
      valid <= 1;
      pc <= in;
      fetch(in, ins_temp);
    end
  end
  always @(posedge clk) begin
    if (valid & ready) begin
      ins_reg <= ins_temp;
      valid   <= 0;
    end else begin
      valid   <= valid;
      ins_reg <= ins_reg;
    end
  end




endmodule