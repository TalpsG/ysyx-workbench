/***************************************************************************************
 * Copyright (c) 2014-2022 Zihao Yu, Nanjing University
 *
 * NEMU is licensed under Mulan PSL v2.
 * You can use this software according to the terms and conditions of the Mulan PSL v2.
 * You may obtain a copy of Mulan PSL v2 at:
 *          http://license.coscl.org.cn/MulanPSL2
 *
 * THIS SOFTWARE IS PROVIDED ON AN "AS IS" BASIS, WITHOUT WARRANTIES OF ANY KIND,
 * EITHER EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO NON-INFRINGEMENT,
 * MERCHANTABILITY OR FIT FOR A PARTICULAR PURPOSE.
 *
 * See the Mulan PSL v2 for more details.
 ***************************************************************************************/

#include "local-include/reg.h"
#include "macro.h"
#include <cpu/cpu.h>
#include <cpu/ifetch.h>
#include <cpu/decode.h>
#include <stdint.h>
#include <stdio.h>

#define R(i) gpr(i) // 寄存器
#define Mr vaddr_read
#define Mw vaddr_write

enum
{
  TYPE_I,
  TYPE_U,
  TYPE_S,
  TYPE_J,
  TYPE_B,
  TYPE_R,
  TYPE_N, // none
};

#define src1R()     \
  do                \
  {                 \
    *src1 = R(rs1); \
  } while (0)
#define src2R()     \
  do                \
  {                 \
    *src2 = R(rs2); \
  } while (0)
#define immI()                        \
  do                                  \
  {                                   \
    *imm = SEXT(BITS(i, 31, 20), 12); \
  } while (0)
#define immU()                              \
  do                                        \
  {                                         \
    *imm = SEXT(BITS(i, 31, 12), 20) << 12; \
  } while (0)
#define immS()                                               \
  do                                                         \
  {                                                          \
    *imm = (SEXT(BITS(i, 31, 25), 7) << 5) | BITS(i, 11, 7); \
  } while (0)





  //以下为wwt实现的
#define immJ()                        \
  do                                  \
  {                                   \
    uint32_t sign= BITS(i, 31, 31)<<20;   \
    uint32_t a = BITS(i, 19, 12)<<12;     \
    uint32_t b = BITS(i, 20, 20)<<11;     \
    uint32_t c = BITS(i, 30, 21)<<1;     \
    *imm = SEXT(sign|a|b|c,21); \
  } while (0)

#define immB()                                               \
  do                                                         \
  {                                                          \
    uint32_t a= BITS(i, 31, 31)<<12;  \
    uint32_t b= BITS(i, 7 , 7)<<11;  \
    uint32_t c= BITS(i, 30 , 25)<<5;  \
    uint32_t d= BITS(i, 11 , 8)<<1;  \
    *imm = SEXT(a|b|c|d, 13); \
  } while (0)



//添加了一个参数shamt
static void decode_operand(Decode *s, int *rd, word_t *src1, word_t *src2, word_t *imm, word_t *shamt,int type)
{
  uint32_t i = s->isa.inst.val;
  int rs1 = BITS(i, 19, 15);
  int rs2 = BITS(i, 24, 20);
  *shamt = BITS(i,25,20);
  *rd = BITS(i, 11, 7);

  switch (type)
  {
  case TYPE_I:
    src1R();
    immI();
    break;
  case TYPE_U:
    immU();
    break;
  case TYPE_S:
    src1R();
    src2R();
    immS();
    break;
  case TYPE_J:
    immJ();
    break;
  case TYPE_B:
    immB();
    src1R();
    src2R();
    break;
  case TYPE_R:
    src1R();
    src2R();
    break;
  }
}

static int decode_exec(Decode *s)
{
  int rd = 0;
  word_t src1 = 0, src2 = 0, imm = 0,shamt = 0;
  s->dnpc = s->snpc;

#define INSTPAT_INST(s) ((s)->isa.inst.val)
#define INSTPAT_MATCH(s, name, type, ... /* execute body */)         \
  {                                                                  \
    decode_operand(s, &rd, &src1, &src2, &imm, &shamt,concat(TYPE_, type)); \
    __VA_ARGS__;                                                     \
  }

  /*
  #define INSTPAT(pattern, ...) do { \
    uint64_t key, mask, shift; \
    pattern_decode(pattern, STRLEN(pattern), &key, &mask, &shift); \
    if ((((uint64_t)INSTPAT_INST(s) >> shift) & mask) == key) { \
      INSTPAT_MATCH(s, ##__VA_ARGS__); \
      goto *(__instpat_end); \
    } \
  } while (0)
  */

  INSTPAT_START();
  INSTPAT("??????? ????? ????? ??? ????? 00101 11", auipc, U, R(rd) = s->pc + imm);
  INSTPAT("??????? ????? ????? 100 ????? 00000 11", lbu, I, R(rd) = Mr(src1 + imm, 1));
  INSTPAT("??????? ????? ????? 000 ????? 01000 11", sb, S, Mw(src1 + imm, 1, src2));

  INSTPAT("0000000 00001 00000 000 00000 11100 11", ebreak, N, NEMUTRAP(s->pc, R(10))); // R(10) is $a0
  /*
  dummy 实现所需的指令
  注意要给dnpc赋值，当前pc值为pc
  */
  // U


  /*
  I
  */ 
  INSTPAT("?????? ?????? ????? 000 ????? 0010011",addi,I,R(rd)=imm+src1);
  INSTPAT("?????? ?????? ????? 000 ????? 1100111",jalr,I,R(rd)=s->pc+4;s->dnpc = src1+imm);
  //load word
  INSTPAT("?????? ?????? ????? 010 ????? 0000011",lw,I,R(rd)=Mr(src1+imm,4));
  //set if less than immediate unsigned 
  INSTPAT("?????? ?????? ????? 011 ????? 0010011",sltiu,I,R(rd)=(src1<imm)?1:0);
  INSTPAT("?????? ?????? ????? 100 ????? 0010011",xori,I,R(rd)=src1^imm);
  // shift right arithmatic immediate
  INSTPAT("010000 0????? ????? 101 ????? 0010011",srai,I,int32_t temp = src1;R(rd)=temp>>shamt);
  INSTPAT("010000 0????? ????? 101 ????? 0010011",srai,I,int32_t temp = src1;R(rd)=temp>>shamt);
  INSTPAT("?????? ?????? ????? 111 ????? 0010011",andi,I,R(rd)=src1&imm);
  /*
  I
  */ 



  /*
  J
  */
  INSTPAT("???????? ???????? ???? ????? 1101111",jal,J,R(rd)=s->pc+4;s->dnpc = s->pc+ imm);
  /*
  J
  */



  /*
  S
  */
  INSTPAT("??????? ????? ????? 010 ????? 0100011",sw,S,Mw(src1+imm, 4, src2));
  INSTPAT("??????? ????? ????? 001 ????? 0100011",sh,S,Mw(src1+imm, 2, src2));
  /*
  S
  */


  /*
  B
  */
  INSTPAT("??????? ????? ????? 001 ????? 1100011",bne,B,s->dnpc = (src1==src2)?s->dnpc:(s->pc+imm));
  INSTPAT("??????? ????? ????? 000 ????? 1100011",beq,B,s->dnpc = (src1!=src2)?s->dnpc:(s->pc+imm));
  /*
  B
  */



  /*
  R
  */
  INSTPAT("0000001 ????? ????? 000 ????? 0110011",mul,R,R(rd)=src1*src2);
  INSTPAT("0000001 ????? ????? 100 ????? 0110011",div,R,R(rd)=src1/src2);
  INSTPAT("0100000 ????? ????? 000 ????? 0110011",sub,R,R(rd)=src1-src2);
  INSTPAT("0000000 ????? ????? 000 ????? 0110011",add,R,R(rd)=src1+src2);
  // set if less unsigned 
  INSTPAT("0000000 ????? ????? 011 ????? 0110011",sltu,R,R(rd)=(src1<src2)?1:0);
  INSTPAT("0000000 ????? ????? 100 ????? 0110011",xor,R,R(rd)=src1^src2);
  INSTPAT("0000000 ????? ????? 110 ????? 0110011",or,R,R(rd)=src1|src2);
  //shift left logical
  INSTPAT("0000000 ????? ????? 001 ????? 0110011",sll,R,R(rd)=src1<<(src2&0x1f));
  /*
  R
  */


  




  INSTPAT("??????? ????? ????? ??? ????? ????? ??", inv, N, INV(s->pc)); //检测到这条宏nemu就变成abort了，所以他应该放在最后
  INSTPAT_END();

  R(0) = 0; // reset $zero to 0

  return 0;
}

int isa_exec_once(Decode *s)
{
  s->isa.inst.val = inst_fetch(&s->snpc, 4);
  return decode_exec(s);
}
