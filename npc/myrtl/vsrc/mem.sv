module mem (
    input clk,
    input valid,
    input wen,
    input [2:0] readop,
    input reg [7:0] wmask,
    input reg [31:0] raddr,
    waddr,
    wdata,
    output reg [31:0] rdata

);
  wire [ 1:0] pos;
  reg  [31:0] rdata_w;
  wire [ 7:0] rdata_b;
  wire [15:0] rdata_h;
  assign pos = raddr[1:0];
  import "DPI-C" function void npc_mem_read(
    input  int raddr,
    output int rdata
  );
  import "DPI-C" function void npc_mem_write(
    input int  waddr,
    input int  wdata,
    input byte wmask
  );

  always @(*) begin
    //$display("valid:%d", valid);
    if (valid) begin  // 有读写请求时
      npc_mem_read(raddr, rdata_w);
      if (wen) begin  // 有写请求时
        //$display("write--> waddr:%8x , wdata:%8x, wmask:%d", waddr, wdata, wmask);
        npc_mem_write(waddr, wdata, wmask);
      end
    end else begin
      rdata_w = 0;
    end
  end


  MuxKey #(
      .NR_KEY  (4),
      .KEY_LEN (2),
      .DATA_LEN(8)
  ) get_rdata_b (
      .out(rdata_b),
      .key(pos),
      .lut({2'h0, rdata_w[7:0], 2'h1, rdata_w[15:8], 2'h2, rdata_w[23:16], 2'h3, rdata_w[31:24]})
  );
  MuxKey #(
      .NR_KEY  (3),
      .KEY_LEN (2),
      .DATA_LEN(16)
  ) get_rdata_h (
      .out(rdata_h),
      .key(pos),
      .lut({2'h0, rdata_w[15:0], 2'h1, rdata_w[23:8], 2'h2, rdata_w[31:16]})
  );
  MuxKey #(
      .NR_KEY  (5),
      .KEY_LEN (3),
      .DATA_LEN(32)
  ) get_rdata (
      .out(rdata),
      .key(readop),
      .lut({
        3'h0,
        {{24{rdata_b[7]}}, rdata_b},
        3'h1,
        {{16{rdata_h[15]}}, rdata_h},
        3'h2,
        rdata_w,
        3'h4,
        {{24{1'b0}}, rdata_b},
        3'h5,
        {{16{1'b0}}, rdata_h}
      })
  );

endmodule
