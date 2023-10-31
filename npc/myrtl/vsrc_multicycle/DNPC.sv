module DNPC (
    input clk,
    input jump_flag,
    branch_flag,
    is_mret,
    is_ecall,
    input [31:0] branch_pc,
    exu_res,
    snpc,
    mtvec,
    mepc,
    output reg [31:0] dnpc
);
  always @(posedge clk) begin
    //$display("jump_flag:%d,exu_res:%8x,branch_flag:%d,branch_pc:%8x", jump_flag, exu_res, branch_flag, branch_pc);
  end
  assign dnpc = is_ecall ? mtvec : (is_mret?mepc:(jump_flag ? exu_res : (branch_flag ? branch_pc : snpc)));

endmodule
