module RDATA (
    input  [ 1:0] mem_pos,
    input  [ 2:0] mem_readop,
    input  [31:0] mem_rdata,
    output [31:0] mem_rdata_final
);
  wire [ 7:0] rdata_b;
  wire [15:0] rdata_h;

  MuxKey #(
      .NR_KEY  (4),
      .KEY_LEN (2),
      .DATA_LEN(8)
  ) get_rdata_b (
      .out(rdata_b),
      .key(mem_pos),
      .lut({
        2'h0, mem_rdata[7:0], 2'h1, mem_rdata[15:8], 2'h2, mem_rdata[23:16], 2'h3, mem_rdata[31:24]
      })
  );
  MuxKey #(
      .NR_KEY  (3),
      .KEY_LEN (2),
      .DATA_LEN(16)
  ) get_rdata_h (
      .out(rdata_h),
      .key(mem_pos),
      .lut({2'h0, mem_rdata[15:0], 2'h1, mem_rdata[23:8], 2'h2, mem_rdata[31:16]})
  );
  MuxKey #(
      .NR_KEY  (5),
      .KEY_LEN (3),
      .DATA_LEN(32)
  ) get_rdata (
      .out(mem_rdata_final),
      .key(mem_readop),
      .lut({
        3'h0,
        {{24{rdata_b[7]}}, rdata_b},
        3'h1,
        {{16{rdata_h[15]}}, rdata_h},
        3'h2,
        mem_rdata,
        3'h4,
        {{24{1'b0}}, rdata_b},
        3'h5,
        {{16{1'b0}}, rdata_h}
      })
  );
endmodule
