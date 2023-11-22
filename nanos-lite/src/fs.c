#include <fs.h>
#include <ramdisk.h>
extern size_t events_read(void *buf, size_t offset, size_t len);
extern size_t serial_write(const void *buf, size_t offset, size_t len);
extern size_t dispinfo_read(void *buf, size_t offset, size_t len);
extern size_t fb_write(const void *buf, size_t offset, size_t len);
enum {FD_STDIN, FD_STDOUT, FD_STDERR, FD_EVENT,FD_DISPINFO,FD_FB};

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
  [FD_EVENT] = {"/dev/events", 0, 0, events_read, invalid_write},
  [FD_DISPINFO] = {"/proc/dispinfo", 0, 0,dispinfo_read , invalid_write},
  [FD_FB] = {"/dev/fb", 0, 0,invalid_read, fb_write},
#include "files.h"
};

void init_fs() {
  // TODO: initialize the size of /dev/fb
  AM_GPU_CONFIG_T p;
  ioe_read(AM_GPU_CONFIG, &p);
  file_table[FD_FB].size = 4*p.height*p.width;
}
int fs_open(const char *pathname, int flags, int mode) {
	static int file_num = sizeof(file_table)/sizeof(Finfo);
	for (int i = 0; i < file_num; i++) {
		if (strcmp(pathname, file_table[i].name) == 0) {
			file_table[i].open_offset = 0;
			//file_table[i].read = NULL;
			//file_table[i].write = NULL;
			return i;
		}
	}
	printf("no file named %s\n",pathname);
	assert(0);
	return -1;
}
size_t fs_read(int fd, void *buf, size_t len) {
	Finfo *p = &file_table[fd];
  if (file_table[fd].read != NULL) {
		size_t ret = p->read(buf,p->open_offset,len);
		file_table[fd].open_offset += ret;
		return ret;
	}
	int real_len = (len+p->open_offset)>p->size ? (p->size - p->open_offset) : len;
	ramdisk_read(buf, p->disk_offset+p->open_offset,real_len);
	p->open_offset += real_len;
	return real_len;
}
size_t fs_write(int fd, const void *buf, size_t len) {
	Finfo *p = &file_table[fd];
  if (file_table[fd].write != NULL) {
		size_t ret = p->write(buf,p->open_offset,len);
		p->open_offset += ret;
		return ret;
	}
	int real_len = (len+p->open_offset)>p->size ? (p->size - p->open_offset) : len;
	ramdisk_write(buf, p->disk_offset +p->open_offset, real_len);
	p->open_offset += real_len;
  return real_len;
}
size_t fs_fileoffset(int fd) {
  return file_table[fd].disk_offset;
}
size_t fs_lseek(int fd, size_t offset, int whence) {
	switch (whence){
		case SEEK_SET: {
			file_table[fd].open_offset = offset;
			return file_table[fd].open_offset;
		}
		case SEEK_CUR: {
			file_table[fd].open_offset += offset;
			return file_table[fd].open_offset;
		}
		case SEEK_END: {
			file_table[fd].open_offset = file_table[fd].size+offset;
			return file_table[fd].open_offset;
		}
		default: {
			printf("whence only can be SEEK_SET,SEEK_CUR or SEEK_END\n");
			return -1;
		}
	}
  return -1;
}
int fs_close(int fd) {
  return 0;
}