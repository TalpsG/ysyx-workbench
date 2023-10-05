#include "utils.h"
extern Vtop top;
struct context {
  uint32_t gpr[32];
  uint32_t pc;
};
void check_regs(void *dut, uint32_t pc) {

}
void difftest_step(uint32_t pc,uint32_t npc) {
  struct context ref;
  difftest_exec(1);
  difftest_regcpy(&ref,DIFFTEST_TO_DUT );
  check_regs(ref,pc);
}