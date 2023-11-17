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
int sys_write(int fd, const void *buf, size_t n) {
	printf("fd:%d\n",fd);
	printf("buf:%p\n",buf);
	printf("size:%d\n",n);
  if (fd == 1 || fd == 2) {
	int i;
	for (i = 0; i < n; i++) {
		putch(((char*)buf)[i]);
	}
	return i;
  } else {
    char str[] = "not support filesystem\n";
	int i;
	int len = strlen(str);
	for (i = 0; i < len; i++) {
		putch(str[i]);
	}
	return i;
  }
}
void do_syscall(Context *c) {
  uintptr_t a[4];
  a[0] = c->GPR1;
  a[1] = c->GPR2;
  a[2] = c->GPR3;
  a[3] = c->GPR4;

  switch (a[0]) {
  case 1: {
	sys_yield();
	break;
  }
  case 0: {
    c->GPRx = sys_exit(a[1]);
	break;
  }
  case 4: {
	c->GPRx = sys_write(a[1],(void*) a[2], a[3]);
	break;
  }

    default: panic("Unhandled syscall ID = %d", a[0]);
  }
}