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
    input mem_read,
    input mem_write,
    input is_mret,
    input is_csr,
    input idu_jump_flag,
    input is_branch,
    input [2:0] csr_waddr,
    input [31:0] idu_mem_wdata,
    output [31:0] branch_pc,
    output wbu_jump_flag,
    output branch_flag,
    output reg mem_finish,
    output [31:0] csr_wdata0,
    output [31:0] csr_wdata1,
    output [31:0] csr_wdata2,
    output [31:0] csr_wdata3,
    output [31:0] csr_wdata4,
    output [31:0] csr_wdata5,
    output [5:0] csr_write,
    output [2:0] mem_readop,
    output reg [1:0] mem_pos,


    output reg mem_arvalid,
    input mem_arready,
    output reg [31:0] mem_araddr,


    output reg mem_rready,
    input mem_rvalid,
    input [1:0] mem_rresp,

    output reg mem_wvalid,
    input mem_wready,
    output reg [31:0] mem_wdata,
    output reg [7:0] mem_wstrb,

    output reg mem_awvalid,
    input mem_awready,
    output reg [31:0] mem_awaddr,

    input mem_bvalid,
    output reg mem_bready,
    input [1:0] mem_bresp


);
  assign wbu_jump_flag = idu_jump_flag;
  assign branch_pc = outpc + imm;
  assign branch_flag = is_branch && exu_res[0];
  //assign reg_write =
  //(opcode == `OPCODE_LUI) 
  //| (opcode == `OPCODE_AUIPC)
  //| (opcode == `OPCODE_JAL)
  //| (opcode == `OPCODE_JALR)
  //| (opcode == `OPCODE_LOAD)
  //| (opcode == `OPCODE_ARITH)
  //| (opcode == `OPCODE_R)
  //| ((opcode == `OPCODE_CSR)&(func3 != 3'b0));
  assign csr_write = is_mret ? 6'h0 : (is_ecall ? 6'h6 : (is_csr ? fake_csr_write : 6'h0));
  assign csr_wdata0 = fake_csr_wdata;
  assign csr_wdata1 = is_ecall ? (outpc + 4) : fake_csr_wdata;
  assign csr_wdata2 = is_ecall ? 32'h1 : fake_csr_wdata;
  assign csr_wdata3 = fake_csr_wdata;
  assign csr_wdata4 = fake_csr_wdata;
  assign csr_wdata5 = fake_csr_wdata;


  wire [5:0] fake_csr_write;
  reg  [1:0] read_state;
  reg  [1:0] write_state;
  reg [31:0] read_delay, read_now;
  reg [31:0] write_delay, write_now;

  always @(posedge clk) begin
    if (mem_finish) begin
      mem_finish <= 0;
    end
  end
  // state 在read或write脉冲来的时候变为1,表示要进行读取或写入操作 读写完毕后置为0
  always @(posedge clk) begin
    if (rst) begin
      read_state  <= `MEM_WAIT_REQ;
      write_state <= `MEM_WAIT_REQ;
      read_delay = $random & 32'h0000001f;
      read_now <= 0;
      mem_araddr <= 0;
      mem_arvalid <= 0;
      mem_rready <= 0;
      write_delay <= $random & 32'h0000001f;
      mem_bready <= 0;
      mem_awvalid <= 0;
      mem_wdata <= 0;
      mem_awaddr <= 0;
      mem_wvalid <= 0;
      mem_pos <= 0;
    end else begin
      case (read_state)
        `MEM_WAIT_REQ: begin
          if (mem_read) begin
            read_state <= `MEM_BUSY;
          end
        end
        `MEM_BUSY: begin
          if (read_now == read_delay) begin
            read_delay = $random & 32'h0000001f;
            mem_araddr <= exu_res;
            mem_pos <= exu_res[1:0];
            mem_arvalid <= 1;
            mem_rready <= 1;
            read_now <= 0;
            read_state <= `MEM_WAIT_RES;
          end else begin
            read_now <= read_now + 1;
          end
        end
        `MEM_WAIT_RES: begin
          if (mem_rvalid && mem_rready) begin
            mem_finish <= 1;
            read_state <= `MEM_WAIT_REQ;
            read_now <= 0;
            mem_araddr <= 0;
            mem_arvalid <= 0;
            mem_rready <= 0;
          end
        end
        default: read_state <= `MEM_WAIT_REQ;
      endcase
      case (write_state)
        `MEM_WAIT_REQ: begin
          if (mem_write) begin
            write_state <= `MEM_BUSY;
          end
        end
        `MEM_BUSY: begin
          if (write_now == write_delay) begin
            write_delay <= $random & 32'h0000001f;
            mem_awvalid <= 1;
            mem_awaddr  <= exu_res;
            mem_wdata   <= idu_mem_wdata;
            mem_bready  <= 1;
            write_now   <= 0;
            mem_wvalid  <= 1;
            write_state <= `MEM_WAIT_RES;
          end else begin
            write_now <= write_now + 1;
          end
        end
        `MEM_WAIT_RES: begin
          if (mem_bvalid) begin
            mem_finish  <= 1;
            write_state <= `MEM_WAIT_REQ;
            mem_awvalid <= 0;
            mem_bready  <= 0;
            mem_wvalid  <= 0;
            mem_wdata   <= 0;
            write_now   <= 0;
            mem_awaddr  <= 0;
          end
        end
        default: write_state <= `MEM_WAIT_REQ;
      endcase
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
