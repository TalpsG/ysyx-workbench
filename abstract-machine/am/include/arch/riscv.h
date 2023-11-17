#ifndef ARCH_H__
#define ARCH_H__
#ifdef __riscv_e
struct Context {
  // TODO: fix the order of these members to match trap.S
  uintptr_t gpr[16], mcause, mstatus,mepc;
  void *pdir;
};
#else
struct Context {
  // TODO: fix the order of these members to match trap.S
  uintptr_t gpr[32], mcause, mstatus,mepc;
  void *pdir;
};
#endif

#ifdef __riscv_e
#define GPR1 gpr[15] // a5
#else
#define GPR1 gpr[17] // a7
#endif

#define GPR2 gpr[10]
#define GPR3 gpr[11]
#define GPR4 gpr[12]
#define GPRx gpr[10]

#endif
