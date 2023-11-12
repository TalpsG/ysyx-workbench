`include "/home/talps/gitrepo/ysyx-workbench/npc/myrtl/vsrc_multicycle/utils.sv"
module ARBITER (
    input clk,
    input rst,

    // ifu 读地址通道
    input [31:0] ifu_araddr,
    input ifu_arvalid,
    output reg ifu_arready,

    // ifu 读数据通道
    input ifu_rready,
    output reg ifu_rvalid,
    output reg [31:0] ifu_rdata,
    output reg [1:0] ifu_rresp,

    //ifu 写地址
    input [31:0] ifu_awaddr,
    input reg ifu_awvalid,
    output reg ifu_awready,


    //ifu 写数据
    input [31:0] ifu_wdata,
    input ifu_wvalid,
    input [7:0] ifu_wstrb,
    output reg ifu_wready,

    //ifu 写返回
    input ifu_bready,
    output reg ifu_bvalid,
    output reg [1:0] ifu_bresp,

    //mem 
    input mem_awvalid,
    input [31:0] mem_awaddr,
    output reg mem_awready,

    input mem_wvalid,
    input [7:0] mem_wstrb,
    input [31:0] mem_wdata,
    output reg mem_wready,

    input mem_bready,
    output reg mem_bvalid,
    output reg [1:0] mem_bresp,

    input mem_arvalid,
    input [31:0] mem_araddr,
    output reg mem_arready,

    input mem_rready,
    output reg mem_rvalid,
    output reg [31:0] mem_rdata,
    output reg [1:0] mem_rresp


);

  //由于rvalid 从mem传到外面访存单元需要2个时钟，所以需要延迟2个时钟
  //避免mem读写完毕后，访存单元控制信号未拉低
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
  wire arready;
  // ifu 读数据通道
  reg rready;
  wire [1:0] rresp;
  wire [31:0] rdata;
  wire rvalid;
  //ifu 写地址
  reg [31:0] awaddr;
  reg awvalid;
  wire awready;
  //ifu 写数据
  reg [31:0] wdata;
  reg wvalid;
  reg [7:0] wstrb;
  wire wready;
  //ifu 写返回
  reg bready;
  wire [1:0] bresp;
  wire bvalid;

  reg [2:0] state;
  wire mem_access;
  wire ifu_access;
  assign ifu_access = ifu_arvalid | ifu_awvalid;
  assign mem_access = mem_arvalid | mem_awvalid;
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
          if (~rvalid && ~bvalid) begin
            if (mem_access & ifu_access) begin
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

              //把ifu信号给mem
              arvalid <= ifu_arvalid;
              araddr <= ifu_araddr;
              rready <= ifu_rready;
              awvalid <= ifu_awvalid;
              awaddr <= ifu_awaddr;
              wvalid <= ifu_wvalid;
              wstrb <= ifu_wstrb;
              wdata <= ifu_wdata;
              bready <= ifu_bready;
            end else if (ifu_access) begin
              //只有ifu 请求
              arvalid <= ifu_arvalid;
              araddr  <= ifu_araddr;
              rready  <= ifu_rready;
              awvalid <= ifu_awvalid;
              awaddr  <= ifu_awaddr;
              wvalid  <= ifu_wvalid;
              wstrb   <= ifu_wstrb;
              wdata   <= ifu_wdata;
              bready  <= ifu_bready;
              state   <= `ARBITER_IFU_BUSY;
            end else if (mem_access) begin
              arvalid <= mem_arvalid;
              araddr  <= mem_araddr;
              rready  <= mem_rready;
              awvalid <= mem_awvalid;
              awaddr  <= mem_awaddr;
              wvalid  <= mem_wvalid;
              wstrb   <= mem_wstrb;
              wdata   <= mem_wdata;
              bready  <= mem_bready;
              state   <= `ARBITER_MEM_BUSY;
            end else begin
              arvalid <= 0;
              araddr  <= 0;
              rready  <= 0;
              awvalid <= 0;
              awaddr  <= 0;
              wvalid  <= 0;
              wstrb   <= 0;
              wdata   <= 0;
              bready  <= 0;
              state   <= `ARBITER_IDLE;
            end
          end
        end
        `ARBITER_MULTI_BUSY: begin
          if (rvalid || bvalid) begin
            ifu_rdata <= rdata;
            ifu_rvalid <= rvalid;
            ifu_arready <= ifu_arready;
            ifu_rresp <= rresp;
            ifu_awready <= awready;
            ifu_wready <= wready;
            ifu_bvalid <= bvalid;
            ifu_bresp <= bresp;

            arvalid <= arvalid_temp;
            araddr <= araddr_temp;
            rready <= rready_temp;
            awvalid <= awvalid_temp;
            awaddr <= awaddr_temp;
            wvalid <= wvalid_temp;
            wstrb <= wstrb_temp;
            wdata <= wdata_temp;
            bready <= bready_temp;

            state <= `ARBITER_MEM_BUSY;
          end
        end
        `ARBITER_IFU_BUSY: begin
          if (rvalid || bvalid) begin
            ifu_rdata <= rdata;
            ifu_rvalid <= rvalid;
            ifu_arready <= ifu_arready;
            ifu_rresp <= rresp;
            ifu_awready <= awready;
            ifu_wready <= wready;
            ifu_bvalid <= bvalid;
            ifu_bresp <= bresp;

            state <= `ARBITER_DELAY;
            arvalid <= 0;
            araddr <= 0;
            rready <= 0;
            awvalid <= 0;
            awaddr <= 0;
            wvalid <= 0;
            wstrb <= 0;
            wdata <= 0;
            bready <= 0;
          end
        end
        `ARBITER_MEM_BUSY: begin
          if (rvalid || bvalid) begin
            mem_rdata <= rdata;
            mem_rvalid <= rvalid;
            mem_arready <= ifu_arready;
            mem_rresp <= rresp;
            mem_awready <= awready;
            mem_wready <= wready;
            mem_bvalid <= bvalid;
            mem_bresp <= bresp;

            state <= `ARBITER_DELAY;
            arvalid <= 0;
            araddr <= 0;
            rready <= 0;
            awvalid <= 0;
            awaddr <= 0;
            wvalid <= 0;
            wstrb <= 0;
            wdata <= 0;
            bready <= 0;
          end
        end
        `ARBITER_DELAY: begin
          ifu_rdata <= 0;
          ifu_rvalid <= 0;
          ifu_arready <= 0;
          ifu_rresp <= 0;
          ifu_awready <= 0;
          ifu_wready <= 0;
          ifu_bvalid <= 0;
          ifu_bresp <= 0;
          mem_rdata <= 0;
          mem_rvalid <= 0;
          mem_arready <= 0;
          mem_rresp <= 0;
          mem_awready <= 0;
          mem_wready <= 0;
          mem_bvalid <= 0;
          mem_bresp <= 0;
          state <= `ARBITER_IDLE;

        end
        default: state <= `ARBITER_IDLE;
      endcase
  end
  MEM u_MEM (
      .clk        (clk),
      .rst        (rst),
      .mem_awvalid(awvalid),
      .mem_awready(awready),
      .mem_awaddr (awaddr),
      .mem_wvalid (wvalid),
      .mem_wstrb  (wstrb),
      .mem_wdata  (wdata),
      .mem_wready (wready),
      .mem_bvalid (bvalid),
      .mem_bready (bready),
      .mem_bresp  (bresp),
      .mem_arvalid(arvalid),
      .mem_arready(arready),
      .mem_araddr (araddr),
      .mem_rvalid (rvalid),
      .mem_rready (rready),
      .mem_rresp  (rresp),
      .mem_rdata  (rdata)
  );

endmodule
