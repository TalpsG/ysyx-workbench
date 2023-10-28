module CU (
    input clk,
    is_ebreak,
    is_mret,
    input [2:0] func3,
    input [6:0] func7,
    input [3:0] extop,
    output pc_write,
    output [1:0] select_num1,
    output select_num2,
    output reg reg_write,
    output [2:0] aluop,
    output arith,
    sub,
    valid,
    is_branch,
    mem_read,
    mem_write,
    csr_write,
    output [7:0] mem_mask,
    output [2:0] mem_readop
);
  wire [2:0] aluop_I;
  wire [2:0] aluop_B;


  always @(posedge clk) begin
    //$display("extop:%d,pc_write:%d", extop, pc_write);
  end
  assign mem_readop = func3;
  assign reg_write = ((extop == 4'd8) |  // lui
      (extop == 4'd9) |  // auipc
      (extop == 4'd1) |  // load
      (extop == 4'd2) |  // addi etc.
      (extop == 4'd10) |  // R 
      (extop == 4'd7) | (extop == 4'd0) | (extop == 4'd4));
  //$display("valid:%d ,mem_write:%d", valid, mem_write);
  //for J type ins 1101111
  assign pc_write = ((extop == 4'd0) | (extop == 4'd7) | (extop == 4'd6));
  assign is_branch = extop == 4'd6;
  assign mem_read = (extop == 4'd1);
  assign mem_write = (extop == 4'd5);
  // branch 和 R 型指令会使用到rs2
  assign select_num2 = ((extop == 4'd6) | (extop == 4'd10));
  assign sub = (func7[5] & (func3 == 3'b000) & (extop == 4'd10)) |
 			  ((extop==4'd6) &((func3 ==3'b0)|(func3 == 3'b1)));
  assign valid = (extop == 4'd1) | (extop == 4'd5);
  assign arith = func7[5];
  assign csr_write = (extop == 4'd4 & (is_ebreak == 0 | is_mret == 0));
  /*
		select_num1 
		0 rs1
		1 pc
		2 0

		select_num2
		0 imm 
		1 rs2
	*/
  MuxKey #(
      .NR_KEY  (3),
      .KEY_LEN (3),
      .DATA_LEN(8)
  ) get_mask (
      .out(mem_mask),
      .key(func3),
      .lut({3'd0, 8'b1, 3'd1, 8'b11, 3'd2, 8'b1111})
  );


  MuxKeyWithDefault #(
      .NR_KEY  (3),
      .KEY_LEN (4),
      .DATA_LEN(2)
  ) get_selectnum1 (
      .out        (select_num1),
      .key        (extop),
      .default_out(2'b0),
      .lut        ({4'd9, 2'd1, 4'd7, 2'd1, 4'd8, 2'd2})
  );
  MuxKey #(
      .NR_KEY  (8),
      .KEY_LEN (3),
      .DATA_LEN(3)
  ) get_aluop_I (
      .out(aluop_I),
      .key(func3),
      .lut({
        3'd0,
        3'd0,  // add
        3'd1,
        3'd1,  //left shift
        3'd2,
        3'd3,  // set	
        3'd3,
        3'd7,  // setu
        3'd4,
        3'd5,  // xor
        3'd5,
        3'd2,  //right shift
        3'd6,
        3'd4,  // or
        3'd7,
        3'd6  //and
      })
  );
  MuxKey #(
      .NR_KEY  (4),
      .KEY_LEN (3),
      .DATA_LEN(3)
  ) get_aluop_B (
      .out(aluop_B),
      .key(func3),
      .lut({3'd4, 3'd3, 3'd5, 3'd3, 3'd6, 3'd7, 3'd7, 3'd7})
  );



  MuxKeyWithDefault #(
      .NR_KEY  (3),
      .KEY_LEN (4),
      .DATA_LEN(3)
  ) get_aluop (
      .out        (aluop),
      .key        (extop),
      .default_out('0),
      .lut        ({4'd2, aluop_I, 4'd10, aluop_I, 4'd6, aluop_B})
  );

  MuxKeyWithDefault #(
      .NR_KEY  (3),
      .KEY_LEN (7),
      .DATA_LEN(8)
  ) get_mem_mask (
      .out        (mem_mask),
      .key        ({func3, extop}),
      .default_out('0),
      .lut        ({7'b0000101, 8'b1, 7'b0010101, 8'b11, 7'b0100101, 8'b1111})
  );


endmodule
