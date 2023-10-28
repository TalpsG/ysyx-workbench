`include "/home/talps/gitrepo/ysyx-workbench/npc/myrtl/vsrc_multicycle/utils.sv"
module ALU (
    input clk,
    input [3:0] aluop,
    input [31:0] num1,
    num2,
    output [31:0] res
);
  wire [31:0] res_sub, res_add, res_xor, res_or, res_and, res_lower_signed,res_lower_unsigned, res_left, res_right_unsigned ,res_right_signed,res_eq;
  wire signed [31:0] signed_num1, signed_num2;
  assign signed_num1 = num1;
  assign signed_num2 = num2;
  /*
0 add
1 sub 
2 xor
3 or
4 and
5 lower_signed
6 shift_left
7 shift_right_unsigned 
8 shift_right_signed 
9 lower_unsigned
10 eq
*/
  assign res_add = num1 + num2;
  assign res_sub = num1 - num2;
  assign res_xor = num1 ^ num2;
  assign res_or = num1 | num2;
  assign res_and = num1 & num2;
  assign res_lower_unsigned = num1 < num2 ? 32'h1 : 32'h0;
  assign res_lower_signed = signed_num1 < signed_num2 ? 32'h1 : 32'h0;
  assign res_left = num1 << num2;
  assign res_right_unsigned = num1 >> num2[4:0];
  assign res_right_signed = signed_num1 >>> num2[4:0];
  assign res_eq = num1 === num2 ? 32'b1 : 32'b0;

  MuxKey #(
      .NR_KEY  (11),
      .KEY_LEN (4),
      .DATA_LEN(32)
  ) get_res (
      .out(res),
      .key(aluop),
      .lut({
        `ALUOP_ADD,
        res_add,
        `ALUOP_SUB,
        res_sub,
        `ALUOP_XOR,
        res_xor,
        `ALUOP_OR,
        res_or,
        `ALUOP_AND,
        res_and,
        `ALUOP_LOWER_SIGNED,
        res_lower_signed,
        `ALUOP_LEFT,
        res_left,
        `ALUOP_RIGHT_L,
        res_right_unsigned,
        `ALUOP_RIGHT_A,
        res_right_signed,
        `ALUOP_LOWER_UNSIGNED,
        res_lower_unsigned,
        `ALUOP_EQ,
        res_eq
      })
  );

endmodule
