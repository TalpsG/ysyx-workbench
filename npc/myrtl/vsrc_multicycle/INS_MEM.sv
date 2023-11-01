module INS_MEM (
    input clk,
    input rst,
    //raddr channel
    input [31:0] araddr,
    input arvalid,
    output reg arready,

    //rdata channel
    output reg [31:0] rdata,
    output reg rvalid,
    output reg [1:0] rresp,
    input rready,

    //waddr channel
    input [31:0] awaddr,
    input awvalid,
    output reg awready,

    //wdata  channel
    input [31:0] wdata,
    input [7:0] wstrb,
    input wvalid,
    output reg wready,

    //bresp 
    output reg [1:0] bresp,
    output reg bvalid,
    input bready
);
  reg  [31:0] awaddr_reg;
  reg  [31:0] wdata_reg;
  reg  [31:0] araddr_reg;
  wire [31:0] rdata_temp;
  // 写地址ready
  always @(posedge clk) begin
    if (rst) awready <= 1'b0;
    else if (bvalid && bready)
      awready <= 1'b0;  //写响应了，写操作结束，不需要awready了
    else if (~awready && awvalid && wvalid)
      awready <= 1;  //写地址和写数据都有效，需要ready
    else awready <= 1;
  end


  // 写地址
  always @(posedge clk) begin
    if (rst) awaddr_reg <= 32'b0;
    else if (~awready && awvalid && wvalid)
      awaddr_reg <= awaddr;  // 此时awready也会被拉高，waddr也会被存下来
  end


  // 写数据 ready
  always @(posedge clk) begin
    if (rst) wready <= 1'b0;
    else if (bvalid && bready) wready <= 1'b0;
    else if (~wready && awvalid && wvalid) wready <= 1'b1;
    else wready <= 1'b0;
  end

  //写数据
  always @(posedge clk) begin
    if (rst) begin
      wdata_reg <= '0;
    end else if (awvalid && wvalid && awready && wready) begin
    end
  end

  //写响应
  always @(posedge clk) begin
    if (rst) begin
      bvalid <= 1'b0;
      bresp  <= 2'b00;
    end else begin
      if (~bvalid && awvalid && awready && wvalid && wready) begin
        bvalid <= 1'b1;
        bresp  <= 2'b00;
      end else if (bready && bvalid) bvalid <= 1'b0;
    end
  end


  //raddr ready
  always @(posedge clk) begin
    if (rst) begin
      arready <= 1;
    end else if (arready & arvalid) begin
      arready <= 0;
    end else begin
      arready <= 1;
    end
  end
  //raddr 
  always @(posedge clk) begin
    if (rst) araddr_reg <= 1;
    else if (arready && arvalid) begin
      araddr_reg <= araddr;
    end
  end
  //rdata 
  always @(posedge clk) begin
    if (rst) rdata = 0;
    else if (~rvalid && arvalid && arready) begin
      npc_mem_read(araddr, rdata);
      rvalid <= 1;
      rresp  <= 0;
    end else if (rvalid) begin
      rvalid <= 0;
      rresp  <= 0;
    end
  end
  //rdata valid

  import "DPI-C" function void npc_mem_read(
    input  int raddr,
    output int rdata
  );
  import "DPI-C" function void npc_mem_write(
    input int  waddr,
    input int  wdata,
    input byte wmask
  );

endmodule
