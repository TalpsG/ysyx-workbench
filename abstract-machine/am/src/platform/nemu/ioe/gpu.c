#include <am.h>
#include <nemu.h>

#define SYNC_ADDR (VGACTL_ADDR + 4)

void __am_gpu_init() {
	int i;
	unsigned int ctl = inl(VGACTL_ADDR);
	int w = ctl>>16;  // TODO: get the correct width
	int h = ctl&0xffff;  // TODO: get the correct height
	uint32_t *fb = (uint32_t *)(uintptr_t)FB_ADDR;
	for (i = 0; i < w * h; i ++) fb[i] = i;
	outl(SYNC_ADDR, 1);
}

void __am_gpu_config(AM_GPU_CONFIG_T *cfg) {
	unsigned int vga_ctl= inl(VGACTL_ADDR);
  *cfg = (AM_GPU_CONFIG_T) {
    .present = true, .has_accel = false,
    .width = vga_ctl>>16, .height = vga_ctl&0xff,
    .vmemsz = (vga_ctl>>16)*(vga_ctl&0xff)*4 
  };
}

void __am_gpu_fbdraw(AM_GPU_FBDRAW_T *ctl) {
  if (ctl->sync) {
	int len = ctl->w*ctl->h;
	int pos = ctl->x * ctl->y;
	for (int i = 0; i < len; i++) {
		outl(FB_ADDR+pos+i,*((uint32_t*)(ctl->pixels)+i));
	}
  }
}

void __am_gpu_status(AM_GPU_STATUS_T *status) {
  status->ready = true;
}
