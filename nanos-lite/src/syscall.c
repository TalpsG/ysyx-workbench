#include <common.h>
#include "syscall.h"
//#define STRACE 1
int sys_yield() {
  yield();
#ifdef STRACE
	printf("%s no param\n",__FUNCTION__);
#endif
  return 0;
}
int sys_exit(int code) {
#ifdef STRACE
	printf("%s param : %d\n",__FUNCTION__,code);
#endif
  halt(code);
	return 0;
}
int sys_write(int fd, void *buf, size_t count) {
	assert(fd == 1|| fd == 2);
	int i;
	char *data = buf;
	for (i = 0; i < count; i++) {
		putch(data[i]);
	}
#ifdef STRACE
	printf("%s param : %p %p %p return:%p\n",__FUNCTION__,fd,buf,count,i);
#endif
	return i;
}
int sys_brk(intptr_t increment) {
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
	case 4: {
		c->GPRx = sys_write(a[1],(void*)a[2],a[3]);
		break;
	}
	case 9: {
		c->GPRx = sys_brk(a[1]);
		break;
	}
        
    default: panic("Unhandled syscall ID = %d", a[0]);
  }

}
