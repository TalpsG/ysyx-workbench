module MA (
    input mem_read,
    input mem_write,

    output reg mem_arvalid,
    input mem_arready,
    output reg [31:0] mem_araddr,


    output reg mem_rready,
    input mem_rvalid,
    input [1:0] mem_rresp,

    output reg mem_wvalid,
    input mem_wready,
    output reg [31:0] mem_wdata,
    output reg [7:0] mem_wstrb,

    output reg mem_awvalid,
    input mem_awready,
    output reg [31:0] mem_awaddr,

    input mem_bvalid,
    output reg mem_bready,
    input [1:0] mem_bresp

);
endmodule
