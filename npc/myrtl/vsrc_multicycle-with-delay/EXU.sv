`include "/home/talps/gitrepo/ysyx-workbench/npc/myrtl/vsrc_multicycle-with-delay/utils.sv"
module EXU (
    input clk,
    input [31:0] oprand1,
    oprand2,
    input [2:0] func3,
    input [6:0] func7,
    input [6:0] opcode,
    output [31:0] res
);
  always @(posedge clk) begin
    //$display("aluop:%d,oprand1:%8x,oprand2:%8x", aluop, oprand1, oprand2);
  end
  wire [3:0] aluop, B_aluop, IR_aluop;
  wire [31:0] alu_res;
  wire neg, wen;
  assign neg = (opcode === `OPCODE_BRANCH) & ((func3 === 3'b001)|(func3 === 3'b101)|(func3 === 3'b111));
  assign res = neg ? {alu_res[31:1], ~alu_res[0]} : alu_res;
  assign wen = (opcode === `OPCODE_LUI) |
			(opcode === `OPCODE_AUIPC) |
			(opcode === `OPCODE_AUIPC) |
			(opcode === `OPCODE_AUIPC) |
			(opcode === `OPCODE_AUIPC) ;
  ALU u_ALU (
      .clk  (clk),
      .aluop(aluop),
      .num1 (oprand1),
      .num2 (oprand2),
      .res  (alu_res)
  );
  MuxKey #(
      .NR_KEY  (6),
      .KEY_LEN (3),
      .DATA_LEN(4)
  ) get_B_aluop (
      .out(B_aluop),
      .key(func3),
      .lut({
        3'b000,
        `ALUOP_EQ,
        3'b001,
        `ALUOP_EQ,
        3'b100,
        `ALUOP_LOWER_SIGNED,
        3'b101,
        `ALUOP_LOWER_SIGNED,
        3'b110,
        `ALUOP_LOWER_UNSIGNED,
        3'b111,
        `ALUOP_LOWER_UNSIGNED
      })
  );
  MuxKey #(
      .NR_KEY  (8),
      .KEY_LEN (3),
      .DATA_LEN(4)
  ) get_IR_aluop (
      .out(IR_aluop),
      .key(func3),
      .lut({
        3'b000,
        (opcode === `OPCODE_R & func7[5] == 1'b1) ? `ALUOP_SUB : `ALUOP_ADD,
        3'b001,
        `ALUOP_LEFT,
        3'b010,
        `ALUOP_LOWER_SIGNED,
        3'b011,
        `ALUOP_LOWER_UNSIGNED,
        3'b100,
        `ALUOP_XOR,
        3'b101,
        func7[5] ? `ALUOP_RIGHT_A : `ALUOP_RIGHT_L,
        3'b110,
        `ALUOP_OR,
        3'b111,
        `ALUOP_AND
      })
  );



  MuxKeyWithDefault #(
      .NR_KEY  (3),
      .KEY_LEN (7),
      .DATA_LEN(4)
  ) get_aluop (
      .out        (aluop),
      .key        (opcode),
      .default_out(`ALUOP_ADD),
      .lut        ({`OPCODE_BRANCH, B_aluop, `OPCODE_ARITH, IR_aluop, `OPCODE_R, IR_aluop})
  );


endmodule
