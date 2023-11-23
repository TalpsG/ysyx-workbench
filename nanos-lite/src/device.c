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
	const char *data = buf;
	for (int i = 0; i < len; i++) {
		putch(data[i]);
	}
  return len;
}

size_t events_read(void *buf, size_t offset, size_t len) {
	AM_INPUT_KEYBRD_T key;
	ioe_read(AM_INPUT_KEYBRD, &key);
	if(key.keycode == AM_KEY_NONE) return 0;
	sprintf(buf,"%d %d\n",key.keydown?1:0,key.keycode);
	return strlen(buf);
}

size_t dispinfo_read(void *buf, size_t offset, size_t len) {
	AM_GPU_CONFIG_T config;
	ioe_read(AM_GPU_CONFIG,&config);
	sprintf(buf,"WIDTH:%d\nHEIGHT:%d\n",config.width,config.height);
  return strlen(buf);
}

size_t fb_write(const void *buf, size_t offset, size_t len) {
  return 0;
}

void init_device() {
  Log("Initializing devices...");
  ioe_init();
}
