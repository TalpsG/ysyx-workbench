`define OPCODE_LUI 7'b0110111
`define OPCODE_AUIPC 7'b0010111
`define OPCODE_JAL 7'b1101111
`define OPCODE_JALR 7'b1100111
`define OPCODE_BRANCH 7'b1100011 
`define OPCODE_LOAD 7'b0000011
`define OPCODE_STORE 7'b0100011
`define OPCODE_ARITH 7'b0010011
`define OPCODE_R 7'b0110011
`define OPCODE_CSR 7'b1110011
`define OPCODE_ECALL 32'h00000073
`define OPCODE_MRET 32'h30200073

`define ALUOP_ADD 4'h0
`define ALUOP_SUB 4'h1
`define ALUOP_XOR 4'h2
`define ALUOP_OR 4'h3
`define ALUOP_AND 4'h4
`define ALUOP_LOWER_SIGNED 4'h5
`define ALUOP_LEFT 4'h6
`define ALUOP_RIGHT_L 4'h7
`define ALUOP_RIGHT_A 4'h8
`define ALUOP_LOWER_UNSIGNED 4'h9
`define ALUOP_EQ 4'ha


`define CSR_MSTATUS 6'b000001
`define CSR_MEPC 6'b000010
`define CSR_MCAUSE 6'b000100
`define CSR_MTVEC 6'b100000


`define IFU_FETCH 2'b00
`define IFU_WAIT 2'b01


`define IDU_READY 2'b00
`define IDU_WAIT_EXU 2'b01
`define IDU_WAIT_MEM 2'b10


`define DNPC_READY 2'b00
`define DNPC_WAIT 2'b01
