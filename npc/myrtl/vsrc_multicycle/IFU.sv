module IFU #(
    WIDTH = 32
) (
    input clk,
    input rst,
    input [WIDTH-1:0] in,
    input ready,
    output [WIDTH-1:0] out,
    output [31:0] ins,
    output valid

);
  reg [31:0] pc;
  assign ins   = rdata;
  assign out   = pc;
  assign valid = rvalid;
  import "DPI-C" function void fetch(
    input  int in,
    output int ins
  );


  reg [31:0] araddr;
  reg arvalid;
  wire arready;
  wire [31:0] rdata;
  wire rvalid;
  wire [1:0] rresp;
  reg rready;

  /*
  *
  * 读事务依赖
  * 1. arvalid 不能依赖 arready
  * 2. arready 可以依赖arvalid
  * 3. arready 可以先与 arvalid 有效
  * 4. rvalid 必须依赖arready和arvalid
  * 5. rvalid 不能依赖 rready
  * 6. rready 可以依赖 rvalid
  * 7. rready 可以先与 rvalid 有效
  *
  *
  */


  //araddr 
  reg fetch_flag;
  always @(posedge clk) begin
    if (rst) begin
      pc <= 32'h80000000 - 32'h4;
      fetch_flag <= 0;
      arvalid <= 0;
      rready <= 0;
    end else if (~rvalid && ~fetch_flag) begin
      pc <= in;
      araddr <= in;
      fetch_flag <= 1;
      arvalid <= 1;
      rready <= 1;
    end else if (rvalid) begin
      fetch_flag <= 0;
      arvalid <= 0;
      rready <= 0;
    end
  end
  // valid
  //always @(posedge clk) begin
  //if (rvalid) begin
  //valid <= 1;
  //end else if (valid && ready) begin
  //valid <= 0;
  //end
  //end




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
