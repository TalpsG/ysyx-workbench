#include "utils.h"
#include <cstddef>
#include <cstdint>
#include <cstdio>
#define  MLEFT 0x80000000u
extern Vtop top;
extern state npc_state;
extern const char *regs[] ;
extern uint8_t mem[];
struct context {
  uint32_t reg[32];
  uint32_t pc;
};
void diff_display_regs(struct context *p) {
	printf("reg    ref   ,     npc\n");
	for (int i = 0; i < 32; i++) {
		printf("%3s: %8x %8x\n",regs[i],p->reg[i],top.gpr[i]);
	}
}
void check_regs(void *dut) {
	struct context *cxt = (struct context *)dut;
	for (int i = 0; i < 32; i++) {
		if (cxt->reg[i] != top.gpr[i]) {
			printf("regs are diff\n");
			diff_display_regs(cxt);
			npc_state = ABORT;
			return;
		}
	}
    if (cxt->pc != top.outpc) {
		printf("pc is diff\n");
		printf("ref:%8x,npc:%8x\n",cxt->pc,top.outpc);
		npc_state = ABORT;
		return;
	}
	printf("diff pass\n");
}
void difftest_step(uint32_t pc,uint32_t npc) {
  struct context ref;
  difftest_exec(1);
  difftest_regcpy(&ref,DIFFTEST_TO_DUT );
  check_regs(&ref);
}
void init_npc_diff(size_t image_size) {
	difftest_init(1234);
	difftest_memcpy(MLEFT,mem , image_size,DIFFTEST_TO_REF);
	struct context temp;
	for (int i = 0; i < 32; i++) {
          temp.reg[i] = top.gpr[i];
	}
	temp.pc = top.outpc;
	difftest_regcpy(&temp, DIFFTEST_TO_REF);
}