module IDU #(
    WIDTH = 32
) (
    input clk,
    input [WIDTH-1:0] instr,
    output [4:0] rs1,
    rs2,
    output reg [4:0] waddr,
    output [31:0] imm,
    output [3:0] extop,
    output [2:0] func3,
    output [6:0] func7,
    output is_ecall,
    is_ebreak,
    is_mret
);
  /*
    extop
    I 0 jalr	
    I 1 load
    I 2 arith
	I 3 fence 
    I 4	csr
    S 5 store
    B 6 branch
    J 7 jal
    U 8 lui
	U 9 auipc
	R 10 
	I 11 ebreak



	I addi    :xxxxxx xxxxxx [rs1] 000 [rd] 0010011
	U auipc   :xxxxxxxx xxxxxxxx xxxx [rd] 0010111
	J jal     :xxxxxxxx xxxxxxxx xxxx [rd] 1101111
	I jalr    :xxxxxx xxxxxx [rs1] 000 [rd] 1100111
	S sw      :xxxxxxx [rs2] [rs1] 010 xxxxx 0100011
*/


  always @(posedge clk) begin
    //$display("is_ecall:%d", is_ecall);
  end
  import "DPI-C" function void ebreak(int ins);
  wire [WIDTH-1:0] immJ, immB, immI, immS, immU;

  assign immI = {{20{instr[31]}}, instr[31:20]};
  assign immU = {instr[31:12], 12'b0};
  assign immS = {{20{instr[31]}}, instr[31:25], instr[11:7]};
  assign immB = {{20{instr[31]}}, instr[7], instr[30:25], instr[11:8], 1'b0};
  assign immJ = {{12{instr[31]}}, instr[19:12], instr[20], instr[30:21], 1'b0};
  assign is_ecall = instr == 32'h00000073;
  assign is_ebreak = instr == 32'h00100073;
  assign is_mret = instr == 32'h30200073;
  IMM get_imm (
      extop,
      immJ,
      immB,
      immI,
      immS,
      immU,
      imm
  );
  wire [6:0] op;
  assign op = instr[6:0];
  assign rs1 = instr[19:15];
  assign rs2 = instr[24:20];
  assign func3 = instr[14:12];
  assign func7 = instr[31:25];
  EXTOP get_extop (
      op,
      extop
  );
  always @(posedge clk) begin
    waddr = instr[11:7];
    ebreak(instr);
  end

endmodule
