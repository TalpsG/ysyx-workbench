#include <common.h>
#include "syscall.h"
#define STRACE 1
int sys_yield() {
  yield();
#ifdef STRACE
	printf("%s no param\n",__FUNCTION__);
#endif
  return 0;
}
int sys_exit(int code) {
  halt(code);
#ifdef STRACE
	printf("%s param : %d\n",__FUNCTION__,code);
#endif
	return 0;
}
void do_syscall(Context *c) {
  uintptr_t a[4];
  a[0] = c->GPR1;
  a[1] = c->GPR2;
  a[2] = c->GPR3;
  a[3] = c->GPRx;
  switch (a[0]) {
	case 0: {
		c->GPRx = sys_exit(a[1]);
		break;
	}
	case 1: {
		c->GPRx = sys_yield();
		break;
	}
    default: panic("Unhandled syscall ID = %d", a[0]);
  }
}
