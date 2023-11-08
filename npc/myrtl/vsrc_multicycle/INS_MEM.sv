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
  reg [31:0] awaddr_reg;
  reg [31:0] wdata_reg;
  reg [31:0] araddr_reg;
  reg [31:0] rdata_reg;
  reg flag;
  reg [31:0] delay, now;
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
    if (rst) begin
      rdata <= 0;
      flag  <= 0;
      delay <= $random & 32'h0000001f;
      now   <= 0;
    end else if (~flag && ~rvalid && arvalid && arready) begin
      npc_mem_read(araddr, rdata_reg);
      flag  <= 1;
      rresp <= 0;
    end else if (rvalid && rready) begin
      rvalid <= 0;
      rresp <= 0;
      now <= 0;
      flag <= 0;
    end
  end


  always @(posedge clk) begin
    if (flag) begin
      if (now == delay) begin
        now <= 0;
        rvalid <= 1;
        rdata <= rdata_reg;
      end else begin
        now   <= now + 1;
        rdata <= 0;
      end
    end else begin
      now   <= 0;
      rdata <= 0;
    end

  end

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
