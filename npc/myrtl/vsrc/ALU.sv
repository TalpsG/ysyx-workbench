module ALU (
    input clk,
    arith,
    sub,
    input [2:0] op,
    input [31:0] num1,
    num2,
    output [31:0] result
);
  /*
	op:
	0 +
	1 <<
	2 >> 
	3 set 
	4 or
	5 xor
	6 and
	7 setu
*/
  always @(posedge clk) begin
    //$display("signed_num1:%d,signed_num2:%d,res:%d,aluop : %d", signed_num1, signed_num2, res_set, op);
  end
  wire [31:0] res_add, res_left, res_right,res_right_l,res_right_a, res_set, res_setu, res_or, res_xor, res_and, res_sub;
  wire res_beq, res_blt, res_bltu;
  wire [4:0] shamt;
  wire signed [31:0] signed_num1, signed_num2;
  assign shamt = num2[4:0] & 5'h1f;
  assign res_add = (sub) ? (num1 - num2) : (num1 + num2);
  assign res_left = num1 << (shamt);
  assign res_right_l = num1 >> shamt;
  assign res_right_a = signed_num1 >>> shamt;
  assign res_right = arith ? res_right_a : res_right_l;
  assign res_set = signed_num1 < signed_num2 ? 1 : 0;
  assign signed_num1 = num1;
  assign signed_num2 = num2;
  assign res_setu = num1 < num2 ? 1 : 0;
  assign res_or = num1 | num2;
  assign res_xor = num1 ^ num2;
  assign res_and = num1 & num2;
  MuxKeyWithDefault #(
      .NR_KEY  (8),
      .KEY_LEN (3),
      .DATA_LEN(32)
  ) get_res (
      result,
      op,
      '0,
      {
        3'd0,
        res_add,
        3'd1,
        res_left,
        3'd2,
        res_right,
        3'd3,
        res_set,
        3'd4,
        res_or,
        3'd5,
        res_xor,
        3'd6,
        res_and,
        3'd7,
        res_setu
      }
  );



endmodule
