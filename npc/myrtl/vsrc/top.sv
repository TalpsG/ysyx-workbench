module top (
    input clk,
    output reg [31:0] outpc,
    output [31:0] out_dnpc,
    out_snpc,
    output [31:0] ins,
    output [31:0] gpr[31:0],
    output [31:0] csr_reg[5:0]
);




  `define ECALL_CSR_REG 6'h6
  `define CSR_MEPC 3'h1



  initial begin
    outpc = 32'h80000000 - 32'h4;
    $display("%8x", outpc);
  end
  wire [31:0] dnpc, imm, res, mem_rdata, mem_wdata, csr_wdata[5:0], fake_csr_wdata, csr_rdata;
  wire [4:0] rs1, rs2;
  wire [5:0] fake_csr_wen, csr_wen;
  wire [3:0] extop;
  wire pc_write, select_num2, sub, is_branch, csr_write, is_ecall, is_ebreak, is_mret;
  wire [1:0] select_num1;
  wire [2:0] aluop, func3;
  wire [6:0] func7;
  wire [31:0] rs1_value, rs2_value;
  wire [31:0] snpc = outpc + 4, reg_wdata, branch_pc;
  wire valid, mem_read, mem_write;
  wire [7:0] mem_mask;
  wire [4:0] reg_waddr;
  wire reg_write, arith;
  wire [2:0] mem_readop, csr_addr;

  assign out_snpc = snpc;
  assign rs1_value = gpr[rs1];
  assign rs2_value = gpr[rs2];
  assign out_dnpc = dnpc;
  //处理跳转指令
  assign dnpc = is_mret?csr_reg[`CSR_MEPC]:is_ecall?csr_rdata:(pc_write ? (is_branch ? (res == {32{1'b1}} ? branch_pc : snpc) : res) : snpc);
  assign reg_wdata = csr_write ? csr_rdata : (pc_write ? snpc : (mem_read ? mem_rdata : res));
  assign mem_wdata = csr_write ? csr_rdata : rs2_value;
  assign csr_addr = is_ecall ? 3'h5 : (csr_write ? ins[22:20] : 3'b111);
  assign csr_rdata = csr_write ? csr_reg[csr_addr] : '0;
  assign csr_wen = is_mret ? '0 : is_ecall ? `ECALL_CSR_REG : fake_csr_wen;  // one hot
  assign csr_wdata[0] = is_ecall ? 32'h0 : (csr_write ? fake_csr_wdata : '0);
  assign csr_wdata[1] = is_ecall ? snpc : (csr_write ? fake_csr_wdata : '0);
  assign csr_wdata[2] = is_ecall ? 32'h1 : (csr_write ? fake_csr_wdata : '0);
  assign csr_wdata[3] = (csr_write ? fake_csr_wdata : '0);
  assign csr_wdata[4] = (csr_write ? fake_csr_wdata : '0);
  assign csr_wdata[5] = (csr_write ? fake_csr_wdata : '0);
  always @(posedge clk) begin
    if (csr_write == 1) begin
      //$display("pc:%8x,ins:%8x,csr_wdata:%8x,is_ecall:%d,ins[22:20]:%d", outpc, ins, csr_wdata, is_ecall, ins[22:20]);
      //$display("csr_write:%d,csr_addr:%d,csr_rdata:%8x,csr_wen:%x", csr_write, csr_addr, csr_rdata, csr_wen);
    end
    //$display("reg_waddr:%d,reg_wdata:%8x,reg_write:%d,extop:%d", reg_waddr, reg_wdata, reg_write, extop);
    //$display("is_branch:%d,branchpc:%8x,pc_write:%d,res:%8x,dnpc:%8x,snpc:%8x", is_branch, branch_pc, pc_write, res, dnpc, snpc);
    //$display("reg_wdata:%8x,snpc:%8x,pc_write:%d", reg_wdata, snpc, pc_write);
  end
  MuxKeyWithDefault #(
      .NR_KEY  (6),
      .KEY_LEN (3),
      .DATA_LEN(6)
  ) get_fake_csr_wen (
      .out(fake_csr_wen),
      .key(csr_addr),
      .default_out('0),
      .lut({3'h0, 6'd1, 3'h1, 6'd2, 3'h2, 6'd4, 3'h3, 6'd8, 3'h4, 6'd16, 3'h5, 6'd32})
  );



  MuxKey #(
      .NR_KEY  (2),
      .KEY_LEN (3),
      .DATA_LEN(32)
  ) get_csr_wdata (
      .out(fake_csr_wdata),
      .key(func3),
      .lut({3'b010, csr_rdata | rs1_value, 3'b001, rs1_value})
  );


  //可疑信号 arith
  wire arith;

  IFU #(
      .WIDTH(32)
  ) u_IFU (
      .clk(clk),
      .in (dnpc),
      .out(outpc),
      .ins(ins)
  );

  IDU #(
      .WIDTH(32)
  ) idu (
      .clk(clk),
      .instr(ins),
      .rs1(rs1),
      .rs2(rs2),
      .waddr(reg_waddr),
      .imm(imm),
      .extop(extop),
      .func3(func3),
      .func7(func7),
      .is_ecall(is_ecall),
      .is_ebreak(is_ebreak),
      .is_mret(is_mret)

  );


  RegisterFile regfile (
      .clk  (clk),
      .wdata(reg_wdata),
      .waddr(reg_waddr),
      .data (gpr),
      .wen  (reg_write)
  );
  CSR csr (
      .clk  (clk),
      .wdata(csr_wdata),
      .wen  (csr_wen),
      .data (csr_reg)
  );

  CU cu (
      .clk        (clk),
      .is_ebreak  (is_ebreak),
      .is_mret    (is_mret),
      .func3      (func3),
      .func7      (func7),
      .extop      (extop),
      .pc_write   (pc_write),
      .select_num1(select_num1),
      .select_num2(select_num2),
      .reg_write  (reg_write),
      .aluop      (aluop),
      .arith      (arith),
      .sub        (sub),
      .valid      (valid),
      .is_branch  (is_branch),
      .csr_write  (csr_write),
      .mem_read   (mem_read),
      .mem_write  (mem_write),
      .mem_mask   (mem_mask),
      .mem_readop (mem_readop)

  );


  EXU exu (
      .clk        (clk),
      .select_num1(select_num1),
      .select_num2(select_num2),
      .arith      (arith),
      .sub        (sub),
      .is_branch  (is_branch),
      .func3      (func3),
      .func7      (func7),
      .aluop      (aluop),
      .rs1_value  (rs1_value),
      .rs2_value  (rs2_value),
      .imm        (imm),
      .pc         (outpc),
      .result     (res),
      .branch_pc  (branch_pc)
  );
  mem u_mem (
      .clk(clk),
      .valid(valid),
      .wen(mem_write),
      .readop(mem_readop),
      .wmask(mem_mask),
      .raddr(res),
      .waddr(res),
      .wdata(mem_wdata),
      .rdata(mem_rdata)
  );

endmodule
