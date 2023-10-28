module EXU (
    input clk,
    input [1:0] select_num1,
    input select_num2,
    arith,
    sub,
    is_branch,
    input [2:0] func3,
    input [6:0] func7,
    input [2:0] aluop,
    input [31:0] rs1_value,
    rs2_value,
    imm,
    pc,
    output [31:0] result,
    output [31:0] branch_pc
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
  // mux for alu op
  wire [31:0] num1, num2, alu_res;
  wire [31:0] branch_res;
  assign branch_pc = pc + imm;
  assign result = is_branch ? branch_res : alu_res;





  /*
		select_num 
		0 rs1 
		1 pc
	*/
  MuxKeyWithDefault #(
      .NR_KEY  (6),
      .KEY_LEN (3),
      .DATA_LEN(32)
  ) u_MuxKeyWithDefault (
      .out(branch_res),
      .key(func3),
      .default_out('0),
      .lut({
        3'd0,
        {32{alu_res == 0}},
        3'd1,
        ~{32{alu_res == 0}},
        3'd4,
        {32{alu_res == 1}},
        3'd5,
        {32{alu_res == 0}},
        3'd6,
        {32{alu_res == 1}},
        3'd7,
        {32{alu_res == 0}}
      })
  );




  MuxKey #(
      .NR_KEY  (3),
      .KEY_LEN (2),
      .DATA_LEN(32)
  ) oprand1 (
      .out(num1),
      .key(select_num1),
      .lut({2'b0, rs1_value, 2'b1, pc, 2'b10, 32'b0})
  );

  /*
		select_num2
		0	imm 
		1  	rs2
	*/
  MuxKeyWithDefault #(
      .NR_KEY  (2),
      .KEY_LEN (1),
      .DATA_LEN(32)
  ) oprand2 (
      num2,
      select_num2,
      '0,
      {1'b0, imm, 1'b1, rs2_value}
  );
  ALU alu (
      clk,
      arith,
      sub,
      aluop,
      num1,
      num2,
      alu_res
  );
  always @(posedge clk) begin
    //$display("alu_res:%8x,result:%8x", alu_res, result);
  end

endmodule
