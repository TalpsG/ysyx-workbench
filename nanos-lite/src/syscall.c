#include <common.h>
#include "syscall.h"
#include <fs.h>
#include <sys/time.h>
#define STRACE 1
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
	int i = fs_write(fd, buf, count);
#ifdef STRACE
	printf("%s param : %p %p %p return:%p\n",__FUNCTION__,fd,buf,count,i);
#endif
	return i;
}
int sys_brk(intptr_t increment) {
#ifdef STRACE
	printf("%s param : %p return:%p\n",__FUNCTION__,increment,0);
#endif
	return 0;
}
int sys_open(const char *path, int flags, int mode) {
	int ret = fs_open(path, flags, mode);
#ifdef STRACE
	printf("%s param : %s %p %p return:%p\n",__FUNCTION__,path,flags,mode,ret);
#endif
	return ret;
}
int sys_read(int fd, void *buf, size_t count) {
	int ret = fs_read(fd, buf, count);
#ifdef STRACE
	printf("%s param : %p %p %p return:%p\n",__FUNCTION__,fd,buf,count,ret);
#endif
	return ret;
}
int sys_close(int fd) {
	int ret = fs_close(fd );
#ifdef STRACE
	printf("%s param : %p return:%p\n",__FUNCTION__,fd,ret);
#endif
	return ret;
}
int  sys_lseek(int fd, int offset, int whence) {
	int ret = fs_lseek(fd,offset,whence );
#ifdef STRACE
	printf("%s param : %p %p %p return:%p\n",__FUNCTION__,fd,offset,whence,ret);
#endif
	return ret;
}
int sys_gettimeofday(struct timeval *tv, struct timezone *tz) {
	uint64_t time = io_read(AM_TIMER_UPTIME).us;
	tv->tv_sec = time / 1000000;
	tv->tv_usec = time % 1000000;
#ifdef STRACE
	printf("%s param : %p %p  \n",__FUNCTION__,tv,tz);
#endif
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
		c->GPRx = sys_yield();
		break;
	}
	case 2: {
		c->GPRx = sys_open((void *)a[1],0,0);
		break;
	}
	case 3: {
		c->GPRx = sys_read(a[1],(void *)a[2],a[3]);
		break;
	}
	case 4: {
		c->GPRx = sys_write(a[1],(void*)a[2],a[3]);
		break;
	}
	case 7: {
		c->GPRx = sys_close(a[1]);
		break;
	}
	case 8: {
		c->GPRx = sys_lseek(a[1],a[2],a[3]);
		break;
	}
	case 9: {
		c->GPRx = sys_brk(a[1]);
		break;
	}
	case 19: {
		c->GPRx = sys_gettimeofday((void *)a[1],(void *)a[2]);
		break;
	}
        
    default: panic("Unhandled syscall ID = %d", a[0]);
  }

}
