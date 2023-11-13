`include "/home/talps/gitrepo/ysyx-workbench/npc/myrtl/vsrc_multicycle-with-delay/utils.sv"
module DNPC (
    input clk,
    input rst,
    input jump_flag,
    input branch_flag,
    input is_mret,
    input is_ecall,
    input valid,
    input ready,
    input [31:0] branch_pc,
    input [31:0] exu_res,
    input [31:0] snpc,
    input [31:0] mtvec,
    input [31:0] mepc,
    output reg [31:0] dnpc
);
  reg [1:0] state;
  always @(posedge clk) begin
    if (valid) begin
      state <= `DNPC_WAIT;
    end
  end
  always @(posedge clk) begin
    //dnpc 改为 reg
    if (rst) begin
      state <= `DNPC_WAIT;
      dnpc  <= 32'h80000000;
    end else if (state == `DNPC_WAIT) begin
      if (is_ecall) begin
        dnpc <= mtvec;
      end else if (is_mret) begin
        dnpc <= mepc;
      end else if (jump_flag) begin
        dnpc <= exu_res;
      end else if (branch_flag) begin
        dnpc <= branch_pc;
      end else begin
        dnpc <= snpc;
      end
      state <= `DNPC_READY;
    end
  end


endmodule
