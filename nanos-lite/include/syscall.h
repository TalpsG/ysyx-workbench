#include <common.h>
void do_syscall(Context *c);
int sys_write(int fd, const void *buf, size_t n);
int sys_exit(int code);
int sys_yield();
