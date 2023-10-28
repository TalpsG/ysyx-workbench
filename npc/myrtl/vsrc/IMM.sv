module IMM (
    input [3:0] extop,
    input [32-1:0] immJ,
    immB,
    immI,
    immS,
    immU,
    output [32-1:0] imm
);
  MuxKeyWithDefault #(
      .NR_KEY  (10),
      .KEY_LEN (4),
      .DATA_LEN(32)
  ) imm_mux (
      imm,
      extop,
      '0,
      {
        4'h0,
        immI,
        4'h1,
        immI,
        4'h2,
        immI,
        4'h3,
        immI,
        4'h4,
        immI,
        4'h5,
        immS,
        4'h6,
        immB,
        4'h7,
        immJ,
        4'h8,
        immU,
        4'h9,
        immU
      }
  );

endmodule
