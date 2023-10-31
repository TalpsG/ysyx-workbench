module IFU #(
    WIDTH = 32
) (
    input clk,
    input rst,
    input [WIDTH-1:0] in,
    input ready,
    output [WIDTH-1:0] out,
    output [31:0] ins,
    output reg valid,
    output axi_valid

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


  reg [31:0] araddr;
  reg arvalid;
  wire arready;
  wire [31:0] rdata;
  wire rvalid;
  wire [1:0] rresp;
  reg rready;
  reg [31:0] axi_pc;
  reg [31:0] axi_ins;

  assign axi_valid = rvalid;
  //araddr 
  always @(posedge clk) begin
    if (rst) axi_pc <= 32'h80000000 - 32'h4;
    else if (~rready) begin
      rready  <= 1;
      arvalid <= 1;
      axi_pc  <= in;
      araddr  <= in;
    end
  end
  INS_MEM u_INS_MEM (
      .clk    (clk),
      .rst    (rst),
      .araddr (araddr),
      .arvalid(arvalid),
      .arready(arready),
      .rdata  (rdata),
      .rvalid (rvalid),
      .rresp  (rresp),
      .rready (rready),
      .awaddr (0),
      .awvalid(0),
      .awready(),
      .wdata  (0),
      .wstrb  (0),
      .wvalid (0),
      .wready (),
      .bresp  (),
      .bvalid (),
      .bready (0)
  );



endmodule
