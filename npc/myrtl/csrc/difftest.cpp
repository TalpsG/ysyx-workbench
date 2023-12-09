#include "utils.h"
#include <cstddef>
#include <cstdint>
#include <cstdio>
#include <dlfcn.h>
#include "macro.h"

void (*ref_difftest_memcpy)(uint32_t addr, void *buf, size_t n, bool direction) = NULL;
void (*ref_difftest_regcpy)(void *dut, bool direction) = NULL;
void (*ref_difftest_exec)(uint64_t n) = NULL;
void (*ref_difftest_raise_intr)(uint64_t NO) = NULL;

#define  MLEFT 0x80000000u
extern Vtop top;
extern state npc_state;
extern const char *regs[] ;
extern uint8_t mem[];

struct context {
  uint32_t reg[32];
  uint32_t pc;
};

void init_difftest(char *ref_so_file, long img_size, int port) {
  assert(ref_so_file != NULL);

  void *handle;
  handle = dlopen(ref_so_file, RTLD_LAZY);
  assert(handle);

  ref_difftest_memcpy = (void (*)(uint32_t, void *, size_t, bool))dlsym(handle, "difftest_memcpy");
  assert(ref_difftest_memcpy);

  ref_difftest_regcpy = (void (*)(void *, bool))dlsym(handle, "difftest_regcpy");
  assert(ref_difftest_regcpy);

  ref_difftest_exec = (void (*)(uint64_t))dlsym(handle, "difftest_exec");
  assert(ref_difftest_exec);

  ref_difftest_raise_intr = (void (*)(uint64_t))dlsym(handle, "difftest_raise_intr");
  assert(ref_difftest_raise_intr);

  void (*ref_difftest_init)(int) = (void (*)(int))dlsym(handle, "difftest_init");
  assert(ref_difftest_init);


  ref_difftest_init(port);
  ref_difftest_memcpy(RESET_VECTOR, guest_to_host(RESET_VECTOR), img_size, DIFFTEST_TO_REF);

  struct context cxt;
  for (int i = 0; i < 32; i++) {
    cxt.reg[i] = top.gpr[i];
  }
  cxt.pc = top.outpc+4;
	ref_difftest_regcpy(&cxt, DIFFTEST_TO_REF);
}


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
		printf("ref:%8x,npc_outpc:%8x\n",cxt->pc,top.outpc);
		npc_state = ABORT;
		return;
	}
	//printf("diff pass\n");
}
void difftest_step(uint32_t pc,uint32_t npc) {
  struct context ref;
  ref_difftest_regcpy(&ref,DIFFTEST_TO_DUT );
  check_regs(&ref);
  ref_difftest_exec(1);
}