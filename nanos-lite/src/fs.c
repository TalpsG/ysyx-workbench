#include <fs.h>
#include <stdio.h>

typedef size_t (*ReadFn) (void *buf, size_t offset, size_t len);
typedef size_t (*WriteFn) (const void *buf, size_t offset, size_t len);

size_t fb_write(const void *buf, size_t offset, size_t len);
size_t dispinfo_read(void *buf, size_t offset, size_t len);
size_t events_read(void *buf, size_t offset, size_t len);
size_t serial_write(const void *buf, size_t offset, size_t len);
size_t ramdisk_read(void *buf, size_t offset, size_t len);
size_t ramdisk_write(const void *buf, size_t offset, size_t len);
typedef struct {
  char *name;
  size_t size;
  size_t disk_offset;
  ReadFn read;
  WriteFn write;
  size_t open_offset;
} Finfo;

enum {FD_STDIN, FD_STDOUT, FD_STDERR, FD_EVENTS,FD_FBCTL,FD_FB};

size_t invalid_read(void *buf, size_t offset, size_t len) {
  panic("should not reach here");
  return 0;
}

size_t invalid_write(const void *buf, size_t offset, size_t len) {
  panic("should not reach here");
  return 0;
}

/* This is the information about all files in disk. */
static Finfo file_table[] __attribute__((used)) = {
  [FD_STDIN]  = {"stdin", 0, 0, invalid_read, invalid_write},
  [FD_STDOUT] = {"stdout", 0, 0, invalid_read, serial_write},
  [FD_STDERR] = {"stderr", 0, 0, invalid_read, serial_write},
  [FD_EVENTS] = {"/dev/events", 0, 0, events_read, invalid_write},
  [FD_FBCTL] = {"/dev/fbctl", 0, 0, dispinfo_read, invalid_write},
  [FD_FB] = {"/dev/fb", 0, 0, invalid_read, fb_write},
#include "files.h"
};
int screen_w,screen_h;
void init_fs() {
  // TODO: initialize the size of /dev/fb
  AM_GPU_CONFIG_T p;
  ioe_read(AM_GPU_CONFIG, &p);
  screen_h = p.height;
  screen_w = p.width;
  file_table[FD_FB].size = 4*p.width*p.height;
}
int fs_open(const char *pathname, int flags, int mode) {
	static int num = sizeof(file_table) / sizeof(Finfo);
	for (int i = 0; i < num; i++) {
		if (strcmp(pathname, file_table[i].name) == 0) {
			file_table[i].open_offset = 0;
			return i;
		}
	}
	printf("no file named %s\n",pathname);
	assert(0);
}
size_t fs_read(int fd, void *buf, size_t len) {
	if (fd <= 2) {
		printf("read to %s\n",file_table[fd].name);
		return 0;
	}
	Finfo *p = &file_table[fd];
	size_t real_len;
	if (p->read) {
		real_len = p->read(buf,p->open_offset,len);
		p->open_offset += real_len;
		return real_len;
	}
	real_len = (p->open_offset + len) > p->size ? (p->size - p->open_offset) : len;
	ramdisk_read(buf,p->disk_offset + p->open_offset , real_len);
	p->open_offset += real_len;
	return real_len;
}
size_t fs_write(int fd, const void *buf, size_t len) {
	Finfo *p = &file_table[fd];
	size_t  real_len;
	if (p->write != NULL) {
		if(fd!=5) printf("write :%d \n",fd);
		real_len = p->write(buf,p->open_offset,len);
		p->open_offset += real_len;
		return real_len;
	}
	assert(p->open_offset+len<p->size);
	real_len = ramdisk_write(buf, p->disk_offset+ p->open_offset, len);
	p->open_offset += real_len;
	return real_len;
}
size_t fs_lseek(int fd, size_t offset, int whence) {
	if (fd <= 2) {
		printf("lseek to %s\n",file_table[fd].name);
		return 0;
	}
	Finfo *p = &file_table[fd];
	switch (whence) {
        case SEEK_CUR: {
			size_t now = p->open_offset + offset;
			if(now > p->size) return -1;
			p->open_offset  = now;
			break;
        }
        case SEEK_END: {
			size_t now = p->size+ offset;
			if(now > p->size) return -1;
			p->open_offset  = now;
			break;
		}
		case SEEK_SET: {
			if(offset > p->size) return -1;
			p->open_offset = offset;
		}
	}
	return p->open_offset;
}
int fs_close(int fd) {
	if (fd <= 2) {
		printf("close %s\n",file_table[fd].name);
		return 0;
	}
	file_table[fd].open_offset = 0;
	return 0;
}