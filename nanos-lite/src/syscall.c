#include "syscall.h"
#include "common.h"
#include <fs.h>
//#define STRACE 1
int sys_yield() {
#ifdef STRACE
  printf("syscall : yield ,no param\n");
#endif
  yield();
  return 0;
}
int sys_exit(int code) {
#ifdef STRACE
  printf("syscall : exit  ,param1: %d\n",code);
#endif
  halt(code);

}
int sys_write(int fd, const void *buf, size_t n) {
#ifdef STRACE
  printf("syscall : write ,param1:%d,param2:%p,param3:%d\n",fd,buf,n);
#endif
  if (fd == 1 || fd == 2) {
	int i;
	for (i = 0; i < n; i++) {
		putch(((char*)buf)[i]);
	}
	return i;
  } else {
	return fs_write(fd, buf, n);
  }
}
int sys_brk(int increment) {
	return 0;
}
int sys_open(char *path, int flag, int mode) {
	return fs_open(path, flag, mode);
}
int sys_read(int fd, void *buf, size_t count) {
  if (fd != 0) {
	return fs_read(fd, buf, count);
  } 
  printf("not support stdin\n");
  return 0;
}
int sys_close(int fd) {
  return 0;
}
void do_syscall(Context *c) {
  uintptr_t a[4];
  a[0] = c->GPR1;
  a[1] = c->GPR2;
  a[2] = c->GPR3;
  a[3] = c->GPR4;

  switch (a[0]) {
  case 0: {
    c->GPRx = sys_exit(a[1]);
	break;
  }
  case 1: {
	sys_yield();
	break;
  }
  case 2: {
    c->GPRx = sys_open((void *)a[1],0,0);
	break;
  }
  case 3: {
    c->GPRx = sys_read(a[1],(void*) a[2], a[3]);
	break;
  }
  case 4: {
	c->GPRx = sys_write(a[1],(void*) a[2], a[3]);
	break;
  }
  case 7:{
	c->GPRx = sys_close(a[1]);
	break;
  }
  case 9: {
    c->GPRx = sys_brk(a[1]);
    break;
  }

    default: panic("Unhandled syscall ID = %d", a[0]);
  }
}