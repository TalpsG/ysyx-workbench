module moduleName (
    input clk,
    input rst,

    // ifu 读地址通道
    input [31:0] ifu_araddr,
    input ifu_arvalid,

    // ifu 读数据通道
    input ifu_rready,

    //ifu 写地址
    input [31:0] ifu_awaddr,
    input ifu_awvalid,

    //ifu 写数据
    input [31:0] ifu_wdata,
    input ifu_wvalid,
    input [7:0] ifu_wstrb,

    //ifu 写返回
    input ifu_bready,

    //mem 
    input mem_awvalid,
    input [31:0] mem_awaddr,

    input mem_wvalid,
    input [7:0] mem_wstrb,
    input [31:0] mem_wdata,

    input mem_bready,

    input mem_arvalid,
    input [31:0] mem_araddr,

    input mem_rready,


    //输出 读地址通道
    output arready,
    //读数据通道
    output [31:0] rdata

);
  always @(posedge clk) begin

  end

endmodule
