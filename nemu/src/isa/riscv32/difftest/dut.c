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

#include <isa.h>
#include <cpu/difftest.h>
#include <stdio.h>
#include "../local-include/reg.h"
#define REGLEN 32

void diff_reg_display(CPU_state *ref_r){
  for(int i=0;i<REGLEN;i++){
    printf("reg:x%2d ,value:0x%10x, ref:0x%10x\n", i,gpr(i),ref_r->gpr[i]);
  }
  printf("reg: pc ,value:0x%10x, ref:0x%10x\n",  cpu.pc,ref_r->pc);
}
bool isa_difftest_checkregs(CPU_state *ref_r, vaddr_t pc) {
  if(cpu.pc!=ref_r->pc){
    printf("pc is diff\n");
    printf("ref : 0x%10x\n",ref_r->pc);
    printf("nemu: 0x%10x\n",cpu.pc);
    return false;
  }
  for(int i=0;i<32;i++){
    if(ref_r->gpr[i]!=cpu.gpr[i]) {
      printf("reg is diff\n");
      diff_reg_display(ref_r);
      return false;
    }
  }
  return true;
}

void isa_difftest_attach() {
}
