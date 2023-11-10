`include "/home/talps/gitrepo/ysyx-workbench/npc/myrtl/vsrc_multicycle/utils.sv"
module IFU #(
    WIDTH = 32
) (
    input clk,
    input rst,
    input [WIDTH-1:0] in,
    input ready,
    output [WIDTH-1:0] out,
    output reg [31:0] ins,
    output reg valid

);

  reg [31:0] pc;
  assign out = pc;
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

  always @(posedge clk) begin
    if (rvalid) ins <= rdata;
  end


  reg [1:0] state;
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
  reg [31:0] delay, now;
  reg read_flag;
  always @(posedge clk) begin
    if (rst) begin
      pc <= 32'h80000000 - 32'h4;
      fetch_flag <= 0;
      arvalid <= 0;
      rready <= 0;
      valid <= 0;
      delay <= $random & 32'h0000001f;
      now <= 0;
      read_flag <= 0;
      state <= `IFU_FETCH;
    end else if (state == `IFU_FETCH && ~rvalid && ~fetch_flag) begin
      pc <= in;
      fetch_flag <= 1;
    end else if (rvalid && fetch_flag) begin
      arvalid <= 0;
      rready <= 0;
      fetch_flag <= 0;
      valid <= 1;
      state <= `IFU_WAIT;
    end else if (state == `IFU_WAIT && ready) begin
      state <= `IFU_FETCH;
    end
  end
  always @(posedge clk) begin
    if (valid) valid <= 0;
  end
  always @(posedge clk) begin
    if (fetch_flag) begin
      if (now == delay) begin
        delay <= $random & 32'h0000001f;
        araddr <= in;
        arvalid <= 1;
        rready <= 1;
        now <= 0;
      end else begin
        now <= now + 1;
      end
    end else begin
      now <= 0;
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
