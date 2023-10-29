`include "/home/talps/gitrepo/ysyx-workbench/npc/myrtl/vsrc_multicycle/utils.sv"
module WBU (
    input clk,
    input [6:0] opcode,
    input [31:0] exu_res,
    input [31:0] imm,
    input [31:0] outpc,
    input [31:0] fake_csr_wdata,
    input is_ecall,
    mem_access,
    is_mret,
    is_csr,
    input [2:0] csr_waddr,
    output [31:0] mem_raddr,
    branch_pc,
    mem_waddr,
    mem_wdata,
    output jump_flag,
    branch_flag,
    output reg mem_finish,
    output [31:0] csr_wdata0,
    csr_wdata1,
    csr_wdata2,
    csr_wdata3,
    csr_wdata4,
    csr_wdata5,
    output [5:0] csr_write
);
  assign mem_raddr   = exu_res;
  assign mem_waddr   = exu_res;
  assign branch_pc   = outpc + imm;
  assign jump_flag   = (opcode == `OPCODE_JAL) | (opcode == `OPCODE_JALR);
  assign branch_flag = (opcode == `OPCODE_BRANCH) & exu_res[0];
  //assign reg_write =
  //(opcode == `OPCODE_LUI) 
  //| (opcode == `OPCODE_AUIPC)
  //| (opcode == `OPCODE_JAL)
  //| (opcode == `OPCODE_JALR)
  //| (opcode == `OPCODE_LOAD)
  //| (opcode == `OPCODE_ARITH)
  //| (opcode == `OPCODE_R)
  //| ((opcode == `OPCODE_CSR)&(func3 != 3'b0));
  assign csr_write   = is_mret ? 6'h0 : (is_ecall ? 6'h6 : (is_csr ? fake_csr_write : 6'h0));
  assign csr_wdata0  = fake_csr_wdata;
  assign csr_wdata1  = is_ecall ? (outpc + 4) : fake_csr_wdata;
  assign csr_wdata2  = is_ecall ? 32'h1 : fake_csr_wdata;
  assign csr_wdata3  = fake_csr_wdata;
  assign csr_wdata4  = fake_csr_wdata;
  assign csr_wdata5  = fake_csr_wdata;

  always @(posedge clk) begin
    //$display("csr_write:%x,is_mret:%d,is_ecall:%d,is_csr:%d,fake_csr_write:%x,fake_csr_wdata:%x", csr_write, is_mret, is_ecall, is_csr, fake_csr_write, fake_csr_wdata);
    if (mem_access) mem_finish <= mem_access;
    else mem_finish <= 0;
  end
  wire [5:0] fake_csr_write;

  MuxKey #(
      .NR_KEY  (6),
      .KEY_LEN (3),
      .DATA_LEN(6)
  ) get_fake_csr_write (
      .out(fake_csr_write),
      .key(csr_waddr),
      .lut({
        3'h0,
        6'b000001,
        3'h1,
        6'b000010,
        3'h2,
        6'b000100,
        3'h3,
        6'b001000,
        3'h4,
        6'b010000,
        3'h5,
        6'b100000
      })
  );




endmodule
