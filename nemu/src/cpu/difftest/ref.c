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

#include "common.h"
#include <assert.h>
#include <isa.h>
#include <cpu/cpu.h>
#include <difftest-def.h>
#include <memory/paddr.h>
#include <stddef.h>
#include <stdint.h>
#include <string.h>
#include "../local-include/reg.h"
#include "cpu/difftest.h"

__EXPORT void difftest_memcpy(paddr_t addr, void *buf, size_t n, bool direction) {
  size_t num = n;
  if(direction==DIFFTEST_TO_REF){
    while(num>0){
      if(num>=4){
        paddr_write(addr, 4,*(uint32_t*) buf);
        num -= 4;
        buf+=4;
      }else if (num>=2)
      {
        paddr_write(addr, 2,*(uint16_t*) buf);
        num -= 2;
        buf+=2;
      }else if (num>=1)
      {
        paddr_write(addr, 1,*(uint8_t*) buf);
        num -= 1;
        buf += 1;
      }
    }
  }else{
    while(num>0){
      if(num>=4){
        uint32_t t = paddr_read(addr, 4);
        *(uint32_t*)buf = t;
        num -= 4;
        buf+=4;
      }else if (num>=2)
      {
        uint16_t t = paddr_read(addr, 2);
        *(uint16_t*)buf = t;
        num -= 2;
        buf+=2;
      }else if (num>=1)
      {
        uint8_t t = paddr_read(addr, 1);
        *(uint8_t*)buf = t;
        num -= 1;
        buf += 1;
      }
    }

  }
}

__EXPORT void difftest_regcpy(void *dut, bool direction) {
  CPU_state *p = dut;
  if(direction == DIFFTEST_TO_REF){
    for(int i=0;i<32;i++){
      p->gpr[i] = gpr(i);
    }
  }
  else{
    for(int i=0;i<32;i++){
      gpr(i) = p->gpr[i];
    }
  }
}

__EXPORT void difftest_exec(uint64_t n) {
  assert(0);
}

__EXPORT void difftest_raise_intr(word_t NO) {
  assert(0);
}

__EXPORT void difftest_init(int port) {
  void init_mem();
  init_mem();
  /* Perform ISA dependent initialization. */
  init_isa();
}
