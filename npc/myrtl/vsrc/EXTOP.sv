module EXTOP (
    input  [6:0] op,
    output [3:0] extop
);
  MuxKeyWithDefault #(
      .NR_KEY  (10),
      .KEY_LEN (7),
      .DATA_LEN(4)
  ) gen_extop (
      extop,
      op,
      '1,
      {
        7'b0110111,
        4'h8,  // U just for lui
        7'b0010111,
        4'h9,  // U  just auipc
        7'b1101111,
        4'h7,  // J for jal
        7'b1100111,
        4'h0,  // I just jalr
        7'b1100011,
        4'h6,  // B branch
        7'b0000011,
        4'h1,  // I load
        7'b0100011,
        4'h5,  // S store
        7'b0010011,
        4'h2,  // I arith
        7'b0110011,
        4'ha,  // R
        7'b1110011,
        4'h4  //csr
      }
  );
endmodule
