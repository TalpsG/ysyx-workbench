#include <common.h>

#if defined(MULTIPROGRAM) && !defined(TIME_SHARING)
# define MULTIPROGRAM_YIELD() yield()
#else
# define MULTIPROGRAM_YIELD()
#endif

#define NAME(key) \
  [AM_KEY_##key] = #key,

static const char *keyname[256] __attribute__((used)) = {
  [AM_KEY_NONE] = "NONE",
  AM_KEYS(NAME)
};

size_t serial_write(const void *buf, size_t offset, size_t len) {
	 int i;
  for (i = 0; i < len; i++) {
    putch(((char*)buf)[i]);
	}
  return i;
}

size_t events_read(void *buf, size_t offset, size_t len) {
	AM_INPUT_KEYBRD_T p;
	ioe_read(AM_INPUT_KEYBRD, &p);
	if(p.keycode == AM_KEY_NONE) return 0;
	sprintf(buf,"%s %s\n",p.keydown?"kd":"ku",keyname[p.keycode]);
	size_t real_len = strlen(buf);
  return real_len<len?real_len:len;
}

size_t dispinfo_read(void *buf, size_t offset, size_t len) {
	AM_GPU_CONFIG_T p;
	ioe_read(AM_GPU_CONFIG, &p);
	snprintf(buf,len,"WIDTH :%d\nHEIGHT:%d",p.width,p.height);
  return 0;
}

size_t fb_write(const void *buf, size_t offset, size_t len) {
	printf("offset:%d,len:%d\n");
	//ioe_write(AM_GPU_FBDRAW,NULL);
  return 0;
}

void init_device() {
  Log("Initializing devices...");
  ioe_init();
}
