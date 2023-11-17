#include <common.h>
void do_syscall(Context *c);
int sys_write(int fd, const void *buf, size_t n);
int sys_exit(int code);
int sys_yield();
int sys_brk(int increment);
int sys_open(char *path, int flag, int mode);
int sys_read(int fd, void *buf, size_t count);
size_t sys_lseek(int fd, size_t offset, int whence);
int sys_close(int fd);