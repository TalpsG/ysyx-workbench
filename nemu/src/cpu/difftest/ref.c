/***************************************************************************************
 * Copyright (c) 2014-2022 Zihao Yu, Nanjing University
 *
 * NEMU is licensed under Mulan PSL v2.
 * You can use this software according to the terms and conditions of the Mulan
 *PSL v2. You may obtain a copy of Mulan PSL v2 at:
 *          http://license.coscl.org.cn/MulanPSL2
 *
 * THIS SOFTWARE IS PROVIDED ON AN "AS IS" BASIS, WITHOUT WARRANTIES OF ANY
 *KIND, EITHER EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO
 *NON-INFRINGEMENT, MERCHANTABILITY OR FIT FOR A PARTICULAR PURPOSE.
 *
 * See the Mulan PSL v2 for more details.
 ***************************************************************************************/

#include "../local-include/reg.h"
#include "common.h"
#include "cpu/difftest.h"
#include <assert.h>
#include <cpu/cpu.h>
#include <difftest-def.h>
#include <isa.h>
#include <memory/paddr.h>
#include <stddef.h>
#include <stdint.h>
#include <string.h>
#include <sys/types.h>
struct context {
  uint32_t reg[32];
  uint32_t pc;
};
struct context ref;
__EXPORT void difftest_memcpy(paddr_t addr, void *buf, size_t n, bool direction) {
	uint8_t *p = buf;
	if (direction == DIFFTEST_TO_REF) {
		for (size_t i = 0; i < n; i++) {
			paddr_write(addr+i, 1, *(p++) );
		}
	} else {
          assert(0);
	}
}

__EXPORT void difftest_regcpy(void *dut, bool direction) {
  struct context *cxt = (struct context *)dut;
  if (direction == DIFFTEST_TO_REF) {
    for (int i = 0; i < 32; i++) {
      gpr(i) = cxt->reg[i];
    }
    cpu.pc = cxt->pc;
  } else {
    for (int i = 0; i < 32; i++) {
      cxt->reg[i] = gpr(i);
    }
    cxt->pc = cpu.pc;
  }
}

__EXPORT void difftest_exec(uint64_t n) { cpu_exec(n); }

__EXPORT void difftest_raise_intr(word_t NO) { assert(0); }

__EXPORT void difftest_init(int port) {
  void init_mem();
  init_mem();
  /* Perform ISA dependent initialization. */
  init_isa();
}
