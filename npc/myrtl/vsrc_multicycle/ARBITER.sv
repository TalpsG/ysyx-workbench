`include "/home/talps/gitrepo/ysyx-workbench/npc/myrtl/vsrc_multicycle/utils.sv"
module moduleName (
    input clk,
    input rst,

    // ifu 读地址通道
    input [31:0] ifu_araddr,
    input ifu_arvalid,
    output ifu_arready,

    // ifu 读数据通道
    input ifu_rready,
    output ifu_rvalid,
    output [31:0] ifu_rdata,
    output [1:0] ifu_rresp,

    //ifu 写地址
    input [31:0] ifu_awaddr,
    input ifu_awvalid,
    output ifu_awready,


    //ifu 写数据
    input [31:0] ifu_wdata,
    input ifu_wvalid,
    input [7:0] ifu_wstrb,
    output ifu_wready,

    //ifu 写返回
    input ifu_bready,
    output ifu_bvalid,
    output [1:0] ifu_bresp,

    //mem 
    input mem_awvalid,
    input [31:0] mem_awaddr,
    output mem_awready,

    input mem_wvalid,
    input [7:0] mem_wstrb,
    input [31:0] mem_wdata,
    output mem_wready,

    input mem_bready,
    output mem_bvalid,
    output [1:0] mem_bresp,

    input mem_arvalid,
    input [31:0] mem_araddr,
    output mem_arready,

    input mem_rready,
    output mem_rvalid,
    output [31:0] mem_rdata,
    output [1:0] mem_rresp


);

  reg awvalid_temp;
  reg [31:0] awaddr_temp;
  reg wvalid_temp;
  reg [7:0] wstrb_temp;
  reg [31:0] wdata_temp;
  reg bready_temp;
  reg arvalid_temp;
  reg [31:0] araddr_temp;
  reg rready_temp;

  //输出给mem的
  reg [31:0] araddr;
  reg arvalid;
  // ifu 读数据通道
  reg rready;
  //ifu 写地址
  reg [31:0] awaddr;
  reg awvalid;
  //ifu 写数据
  reg [31:0] wdata;
  reg wvalid;
  reg [7:0] wstrb;
  //ifu 写返回
  reg bready;

  reg [1:0] state;
  always @(posedge clk) begin
    if (rst) begin
      arvalid_temp <= 0;
      awaddr_temp <= 0;
      wvalid_temp <= 0;
      wstrb_temp <= 0;
      wdata_temp <= 0;
      bready_temp <= 0;
      arvalid_temp <= 0;
      araddr_temp <= 0;
      rready_temp <= 0;
      state <= `ARBITER_IDLE;
    end else
      case (state)
        `ARBITER_IDLE: begin
          if (ifu_arvalid && mem_arvalid) begin
            /*
		因为我写的axilite的master都是将信号全部发射过来
		所以只判断一个信号就可以
	  */
            arvalid_temp <= mem_arvalid;
            awaddr_temp <= mem_awaddr;
            wvalid_temp <= mem_wvalid;
            wstrb_temp <= mem_wstrb;
            wdata_temp <= mem_wdata;
            bready_temp <= mem_bready;
            arvalid_temp <= mem_arvalid;
            araddr_temp <= mem_araddr;
            rready_temp <= mem_rready;
            //暂存等待的请求
            state <= `ARBITER_MULTI_BUSY;
          end
        end
        default: state <= `ARBITER_IDLE;
      endcase
  end

endmodule
