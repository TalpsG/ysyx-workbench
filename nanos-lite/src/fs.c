#include <fs.h>
#include <ramdisk.h>

extern size_t serial_write(const void *buf, size_t offset, size_t len);
enum {FD_STDIN, FD_STDOUT, FD_STDERR, FD_FB};

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
  [FD_STDIN]  = {"stdin", 0, 0, invalid_read, serial_write},
  [FD_STDOUT] = {"stdout", 0, 0, invalid_read, invalid_write},
  [FD_STDERR] = {"stderr", 0, 0, invalid_read, invalid_write},
#include "files.h"
};

void init_fs() {
  // TODO: initialize the size of /dev/fb
}
int fs_open(const char *pathname, int flags, int mode) {
	static int file_num = sizeof(file_table)/sizeof(Finfo);
	for (int i = 0; i < file_num; i++) {
		if (strcmp(pathname, file_table[i].name) == 0) {
			file_table[i].open_offset = 0;
			file_table[i].read = NULL;
			file_table[i].write = NULL;
			return i;
		}
	}
	printf("no file named %s\n",pathname);
	assert(0);
	return -1;
}
size_t fs_read(int fd, void *buf, size_t len) {
	ramdisk_read(buf, file_table[fd].disk_offset+file_table[fd].open_offset,len);
	file_table[fd].open_offset += len;
	return len;
}
size_t fs_write(int fd, const void *buf, size_t len) {
  if (file_table[fd].write != NULL) {
    return file_table[fd].write(buf,0,len);
	}
	ramdisk_write(buf, file_table[fd].disk_offset +file_table[fd].open_offset, len);
	file_table[fd].open_offset += len;
  return len;
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