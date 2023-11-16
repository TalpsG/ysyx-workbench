#include "syscall.h"
#include "common.h"
int sys_yield() {
  printf("syscall : yield ,no param\n");
  yield();
  return 0;
}
int sys_exit(int code) {
  printf("syscall : exit  ,param1: %d\n",code);
  halt(code);
}
void do_syscall(Context *c) {
  uintptr_t a[4];
  a[0] = c->GPR1;
  a[1] = c->GPR2;
  switch (a[0]) {
  case 1: {
	sys_yield();
	break;
  }
  case 0: {
    sys_exit(a[1]);
	break;
	}

    default: panic("Unhandled syscall ID = %d", a[0]);
  }
}