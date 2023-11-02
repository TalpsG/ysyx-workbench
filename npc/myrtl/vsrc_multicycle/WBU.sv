`include "/home/talps/gitrepo/ysyx-workbench/npc/myrtl/vsrc_multicycle/utils.sv"
module WBU (
    input clk,
    input rst,
    input [6:0] opcode,
    input [31:0] exu_res,
    input [31:0] imm,
    input [31:0] outpc,
    input [31:0] fake_csr_wdata,
    input is_ecall,
    input mem_access,
    input mem_read,
    input mem_write,
    input is_mret,
    input is_csr,
    input [2:0] csr_waddr,
    output [31:0] branch_pc,
    output jump_flag,
    output branch_flag,
    output reg mem_finish,
    output [31:0] csr_wdata0,
    output [31:0] csr_wdata1,
    output [31:0] csr_wdata2,
    output [31:0] csr_wdata3,
    output [31:0] csr_wdata4,
    output [31:0] csr_wdata5,
    output [5:0] csr_write,


    output reg mem_arvalid,
    input mem_arready,
    output [31:0] mem_araddr,


    output reg mem_rready,
    input mem_rvalid,
    input [31:0] mem_rdata,
    input [1:0] mem_rresp,

    output reg mem_wvalid,
    input mem_wready,
    output reg [31:0] mem_wdata,
    output reg [7:0] mem_wstrb,

    output reg mem_awvalid,
    input mem_awready,
    output reg [31:0] mem_awaddr,

    input mem_bvalid,
    output mem_bready,
    input [1:0] mem_bresp


);
  assign mem_araddr  = exu_res;
  assign mem_awaddr  = exu_res;
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
  end
  wire [5:0] fake_csr_write;





  always @(posedge clk) begin
    if (rst) begin
      mem_rready  <= 0;
      mem_arvalid <= 0;
      mem_wvalid  <= 0;
      mem_awvalid <= 0;
      mem_bready  <= 0;
    end else if (mem_access) begin
      if (mem_read) begin
        if (mem_read) begin
          if (~mem_rvalid) begin
            mem_arvalid <= 1;
            mem_rready  <= 1;
          end else begin
            mem_arvalid <= 0;
            mem_rready  <= 0;
            mem_finish  <= 1;
          end
        end else if (mem_write) begin
          //write 
          if (~mem_wvalid) begin
            mem_wvalid  <= 1;
            mem_awvalid <= 1;
            mem_bready  <= 1;
          end else if (mem_bvalid) begin
            mem_bready  <= 0;
            mem_awvalid <= 0;
            mem_wvalid  <= 0;
          end
        end
      end
    end
  end


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
