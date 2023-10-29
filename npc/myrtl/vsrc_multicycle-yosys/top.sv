`include "/home/talps/gitrepo/ysyx-workbench/npc/myrtl/vsrc_multicycle/utils.sv"
module top (
    input rst,
    input clk,
    output [31:0] outpc,
    output [31:0] out_dnpc,
    out_snpc,
    output [31:0] ins
    //output [31:0] gpr[31:0],
    //output [31:0] csr_reg[5:0]
);
  wire [31:0] dnpc, snpc;
  assign out_snpc = snpc;
  assign out_dnpc = dnpc;
  assign snpc = outpc + 4;
  IFU #(
      .WIDTH(32)
  ) u_IFU (
      .clk(clk),
      .rst(rst),
      .in (dnpc),
      .out(outpc),
      .ins(ins)
  );

  wire [4:0] rs1, rs2, rd;
  wire [31:0] imm;
  wire [ 6:0] func7;
  wire [ 6:0] opcode;
  wire [ 2:0] func3;
  wire [2:0] select_oprand1, select_oprand2;
  wire reg_write;
  wire pc_write;
  wire mem_write;
  wire mem_valid;
  wire is_csr;
  wire [2:0] csr_waddr;
  IDU u_IDU (
      .clk           (clk),
      .ins           (ins),
      .rs1           (rs1),
      .rs2           (rs2),
      .rd            (rd),
      .imm           (imm),
      .func7         (func7),
      .opcode        (opcode),
      .func3         (func3),
      .select_oprand1(select_oprand1),
      .select_oprand2(select_oprand2),
      .reg_write     (reg_write),
      .pc_write      (pc_write),
      .mem_valid     (mem_valid),
      .mem_write     (mem_write),
      .is_ecall      (is_ecall),
      .is_mret       (is_mret),
      .csr_waddr     (csr_waddr),
      .is_csr        (is_csr)
  );
  wire [31:0] reg_wdata;
  wire [31:0] reg_rdata1;
  wire [31:0] reg_rdata2;
  wire [4:0] reg_waddr = rd;
  wire [4:0] reg_raddr1 = rs1;
  wire [4:0] reg_raddr2 = rs2;
  wire reg_ren1 = 1;
  wire reg_ren2 = 1;



  MuxKey #(
      .NR_KEY  (8),
      .KEY_LEN (7),
      .DATA_LEN(32)
  ) get_reg_wdata (
      .out(reg_wdata),
      .key(opcode),
      .lut({
        `OPCODE_LUI,
        exu_res,
        `OPCODE_AUIPC,
        exu_res,
        `OPCODE_JAL,
        snpc,
        `OPCODE_JALR,
        snpc,
        `OPCODE_LOAD,
        mem_rdata,
        `OPCODE_ARITH,
        exu_res,
        `OPCODE_R,
        exu_res,
        `OPCODE_CSR,
        csr_rdata
      })
  );


  RegisterFile u_RegisterFile (
      .clk   (clk),
      .wdata (reg_wdata),
      .waddr (reg_waddr),
      .raddr1(reg_raddr1),
      .raddr2(reg_raddr2),
      .wen   (reg_write),
      .ren1  (reg_ren1),
      .ren2  (reg_ren2),
      //.data  (gpr),
      .rdata1(reg_rdata1),
      .rdata2(reg_rdata2)
  );


  wire [31:0] oprand1, oprand2;
  MuxKey #(
      .NR_KEY  (3),
      .KEY_LEN (3),
      .DATA_LEN(32)
  ) get_oprand1 (
      .out(oprand1),
      .key(select_oprand1),
      .lut({3'b000, 32'h0, 3'b001, outpc, 3'b010, reg_rdata1})
  );
  MuxKey #(
      .NR_KEY  (2),
      .KEY_LEN (3),
      .DATA_LEN(32)
  ) get_oprand2 (
      .out(oprand2),
      .key(select_oprand2),
      .lut({3'b0, reg_rdata2, 3'b1, imm})
  );



  wire [31:0] exu_res;
  EXU u_EXU (
      .clk    (clk),
      .oprand1(oprand1),
      .oprand2(oprand2),
      .func3  (func3),
      .func7  (func7),
      .opcode (opcode),
      .res    (exu_res)
  );

  wire mem_valid;
  wire [2:0] mem_readop = func3;
  wire [31:0] mem_raddr;
  wire [31:0] mem_rdata;
  wire [31:0] mem_wdata = reg_rdata2;
  wire [31:0] mem_waddr;
  wire [7:0] mem_wmask;

  MuxKey #(
      .NR_KEY  (3),
      .KEY_LEN (3),
      .DATA_LEN(8)
  ) get_wmask (
      .out(mem_wmask),
      .key(func3),
      .lut({3'b000, 8'h01, 3'b001, 8'h03, 3'b010, 8'h0f})
  );

  mem u_mem (
      .clk   (clk),
      .valid (mem_valid),
      .wen   (mem_write),
      .readop(mem_readop),
      .wmask (mem_wmask),
      .raddr (mem_raddr),
      .waddr (mem_waddr),
      .wdata (mem_wdata),
      .rdata (mem_rdata)
  );

  wire [31:0] branch_pc;
  wire [31:0] fake_csr_wdata;
  wire branch_flag;
  wire jump_flag;
  wire is_mret;
  wire is_ecall;

  MuxKey #(
      .NR_KEY  (2),
      .KEY_LEN (3),
      .DATA_LEN(32)
  ) get_fake_csr_wdata (
      .out(fake_csr_wdata),
      .key(func3),
      .lut({3'b010, csr_rdata | reg_rdata1, 3'b001, reg_rdata1})
  );

  WBU u_WBU (
      .clk           (clk),
      .opcode        (opcode),
      .exu_res       (exu_res),
      .imm           (imm),
      .outpc         (outpc),
      .mem_raddr     (mem_raddr),
      .branch_pc     (branch_pc),
      .mem_waddr     (mem_waddr),
      .mem_wdata     (mem_wdata),
      .jump_flag     (jump_flag),
      .branch_flag   (branch_flag),
      .is_ecall      (is_ecall),
      .is_mret       (is_mret),
      .is_csr        (is_csr),
      .csr_waddr     (csr_waddr),
      .csr_wdata0    (csr_wdata0),
      .csr_wdata1    (csr_wdata1),
      .csr_wdata2    (csr_wdata2),
      .csr_wdata3    (csr_wdata3),
      .csr_wdata4    (csr_wdata4),
      .csr_wdata5    (csr_wdata5),
      .csr_write     (csr_write),
      .fake_csr_wdata(fake_csr_wdata)
  );


  DNPC u_DNPC (
      .clk        (clk),
      .jump_flag  (jump_flag),
      .branch_flag(branch_flag),
      .is_mret    (is_mret),
      .branch_pc  (branch_pc),
      .exu_res    (exu_res),
      .snpc       (snpc),
      .dnpc       (dnpc),
      .is_ecall   (is_ecall),
      .mtvec      (csr_rdata5),
      .mepc       (csr_rdata1)
  );


  wire [5:0] csr_write;
  wire [31:0] csr_wdata0, csr_wdata1, csr_wdata2, csr_wdata3, csr_wdata4, csr_wdata5;
  wire [31:0] csr_rdata0, csr_rdata1, csr_rdata2, csr_rdata3, csr_rdata4, csr_rdata5;
  wire [31:0] csr_rdata;

  CSR u_CSR (
      .clk   (clk),
      .wdata0(csr_wdata0),
      .wdata1(csr_wdata1),
      .wdata2(csr_wdata2),
      .wdata3(csr_wdata3),
      .wdata4(csr_wdata4),
      .wdata5(csr_wdata5),
      .wen   (csr_write),
      .rdata0(csr_rdata0),
      .rdata1(csr_rdata1),
      .rdata2(csr_rdata2),
      .rdata3(csr_rdata3),
      .rdata4(csr_rdata4),
      .rdata5(csr_rdata5)
  );
  MuxKey #(
      .NR_KEY  (6),
      .KEY_LEN (3),
      .DATA_LEN(32)
  ) get_csr_rdata (
      .out(csr_rdata),
      .key(ins[22:20]),
      .lut({
        3'h0,
        csr_rdata0,
        3'h1,
        csr_rdata1,
        3'h2,
        csr_rdata2,
        3'h3,
        csr_rdata3,
        3'h4,
        csr_rdata4,
        3'h5,
        csr_rdata5
      })
  );






endmodule