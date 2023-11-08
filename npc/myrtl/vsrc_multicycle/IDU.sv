`include "/home/talps/gitrepo/ysyx-workbench/npc/myrtl/vsrc_multicycle/utils.sv"

module IDU (
    input clk,
    input rst,
    input [31:0] real_ins,
    input ifu_valid,
    input mem_rvalid,
    input mem_finish,
    output [4:0] rs1,
    output [4:0] rs2,
    output [4:0] rd,
    output [31:0] imm,
    output [6:0] func7,
    output [6:0] opcode,
    output [2:0] func3,
    output [2:0] select_oprand1,
    output [2:0] select_oprand2,
    output reg_write,
    output pc_write,
    // 0 写exu_res,1 写pc+imm
    output mem_read,
    output mem_write,
    output mem_access,
    output is_ecall,
    output is_mret,
    output is_csr,
    output jump_flag,
    output is_branch,
    output reg idu_ready,
    output [2:0] csr_waddr
);
  wire fake_reg_write;
  wire [31:0] ins;
  assign ins = (ifu_valid && ~mem_finish && ~idu_ready) ? real_ins : 0;

  import "DPI-C" function void ebreak(int ins);
  always @(posedge clk) begin
    ebreak(ins);
  end

  always @(posedge clk) begin
    if (rst) idu_ready <= 0;
    else if (mem_access) begin
      if (~mem_finish) begin
        idu_ready <= 0;
      end else if (ifu_valid) begin
        idu_ready <= 1;
      end
    end else if (ifu_valid) begin
      idu_ready <= 1;
    end else begin
      idu_ready <= 0;
    end

  end
  wire [31:0] immI, immU, immB, immS, immJ;

  assign opcode = ins[6:0];
  assign rs1 = ins[19:15];
  assign rs2 = ins[24:20];
  assign rd = ins[11:7];
  assign func7 = ins[31:25];
  assign func3 = ins[14:12];
  assign immI = {{20{ins[31]}}, ins[31:20]};
  assign immU = {ins[31:12], 12'b0};
  assign immS = {{20{ins[31]}}, ins[31:25], ins[11:7]};
  assign immB = {{20{ins[31]}}, ins[7], ins[30:25], ins[11:8], 1'b0};
  assign immJ = {{12{ins[31]}}, ins[19:12], ins[20], ins[30:21], 1'b0};
  assign is_csr = ((opcode === `OPCODE_CSR) & (func3 != 3'b0));
  assign fake_reg_write = (opcode === `OPCODE_LUI ) |
  (opcode === `OPCODE_AUIPC) |
  (opcode === `OPCODE_JAL) |
  (opcode === `OPCODE_JALR) |
  (opcode === `OPCODE_LOAD) |
  (opcode === `OPCODE_ARITH) |
  (opcode === `OPCODE_R) |
  is_csr;
  //assign reg_write = fake_reg_write;
  assign reg_write = mem_access ? (mem_rvalid ? fake_reg_write : 0) : fake_reg_write;

  assign pc_write = (opcode === `OPCODE_JAL) | (opcode === `OPCODE_JALR)|(opcode === `OPCODE_BRANCH);
  assign mem_read = (opcode === `OPCODE_LOAD);
  assign mem_write = (opcode === `OPCODE_STORE);
  assign is_ecall = (ins === `OPCODE_ECALL);
  assign is_mret = (ins === `OPCODE_MRET);
  assign mem_access = !mem_finish & (mem_read | mem_write);

  assign csr_waddr = ins[22:20];
  assign jump_flag = (opcode == `OPCODE_JAL) | (opcode == `OPCODE_JALR);
  assign is_branch = (opcode == `OPCODE_BRANCH);

  MuxKey #(
      .NR_KEY  (8),
      .KEY_LEN (7),
      .DATA_LEN(32)
  ) u_MuxKey (
      .out(imm),
      .key(opcode),
      .lut({
        `OPCODE_LUI,
        immU,
        `OPCODE_AUIPC,
        immU,
        `OPCODE_JAL,
        immJ,
        `OPCODE_JALR,
        immI,
        `OPCODE_BRANCH,
        immB,
        `OPCODE_LOAD,
        immI,
        `OPCODE_STORE,
        immS,
        `OPCODE_ARITH,
        immI
      })
  );

  /*
   0 0
   1 pc
   2 rs1
  */
  MuxKey #(
      .NR_KEY  (9),
      .KEY_LEN (7),
      .DATA_LEN(3)
  ) get_select_oprand1 (
      .out(select_oprand1),
      .key(opcode),
      .lut({
        `OPCODE_LUI,
        3'd0,
        `OPCODE_AUIPC,
        3'd1,
        `OPCODE_JAL,
        3'd1,
        `OPCODE_JALR,
        3'd2,
        `OPCODE_BRANCH,
        3'd2,
        `OPCODE_LOAD,
        3'd2,
        `OPCODE_STORE,
        3'd2,
        `OPCODE_ARITH,
        3'd2,
        `OPCODE_R,
        3'd2

      })
  );
  /*
   0 rs2
   1 imm
  */
  MuxKey #(
      .NR_KEY  (9),
      .KEY_LEN (7),
      .DATA_LEN(3)
  ) get_select_oprand2 (
      .out(select_oprand2),
      .key(opcode),
      .lut({
        `OPCODE_LUI,
        3'd1,
        `OPCODE_AUIPC,
        3'd1,
        `OPCODE_JAL,
        3'd1,
        `OPCODE_JALR,
        3'd1,
        `OPCODE_BRANCH,
        3'd0,
        `OPCODE_LOAD,
        3'd1,
        `OPCODE_STORE,
        3'd1,
        `OPCODE_ARITH,
        3'd1,
        `OPCODE_R,
        3'd0

      })
  );



endmodule
