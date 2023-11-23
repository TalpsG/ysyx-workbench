#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

static int evtdev = -1;
static int fbdev = -1;
static int screen_w = 0, screen_h = 0;
static int canvas_w = 0, canvas_h = 0;
static uint32_t boot_time = 0;
struct timeval tv;
uint32_t NDL_GetTicks() {
	gettimeofday(&tv,NULL)	;
	uint32_t now = tv.tv_sec * 1000 + tv.tv_usec / 1000;
	return now - boot_time;
}

int NDL_PollEvent(char *buf, int len) {
	if (read(evtdev, buf, len)) {
		return 1;
	}
	return 0;
}

void NDL_OpenCanvas(int *w, int *h) {
  if (getenv("NWM_APP")) {
     int fbctl = 4;
     fbdev = 5;
    // fb的fd要修改
    screen_w = *w; screen_h = *h;
    char buf[64];
    int len = sprintf(buf, "%d %d", screen_w, screen_h);
    // let NWM resize the window and create the frame buffer
    write(fbctl, buf, len);
    while (1) {
      // 3 = evtdev
      int nread = read(3, buf, sizeof(buf) - 1);
      if (nread <= 0) continue;
      buf[nread] = '\0';
      if (strcmp(buf, "mmap ok") == 0) break;
    }
    close(fbctl);
  } else {
    if (*w == 0 && *h == 0) {
		*w = screen_w;
		*h = screen_h;
		canvas_w = screen_w;
		canvas_h = screen_h;
    } else {
		canvas_w = *w;
		canvas_h = *h;
	}
  }
}

void NDL_DrawRect(uint32_t *pixels, int x, int y, int w, int h) {
	lseek(fbdev, 0 , SEEK_SET);
	for (int i = 0; i < h; i++) {
		lseek(fbdev, x, SEEK_CUR);
		write(fbdev,pixels+y*w+i*w+x,w);
		lseek(fbdev,(screen_w - x- w),SEEK_CUR);
	}
	lseek(fbdev,0,SEEK_END);
}

void NDL_OpenAudio(int freq, int channels, int samples) {
}

void NDL_CloseAudio() {
}

int NDL_PlayAudio(void *buf, int len) {
  return 0;
}

int NDL_QueryAudio() {
  return 0;
}

int NDL_Init(uint32_t flags) {
  if (getenv("NWM_APP")) {
    evtdev = 3;
  }
  evtdev = open("/dev/events",0,0);
  fbdev = open("/dev/fb",0,0);
  gettimeofday(&tv,NULL);
  boot_time = tv.tv_sec * 1000 + tv.tv_usec / 1000;
  int fbctl = open("/dev/fbctl",0,0);
  char buf[65];
  read(fbctl, buf, 64);
  int len = strlen(buf);
  for (int i = 0; i < len;i++ ) {
    if (buf[i] == ' ' || buf[i] == '\n' || buf[i] == ':') {
		continue;
	}
	if (strncmp(buf + i, "HEIGHT",6) == 0) {
		i += strlen("HEIGHT");
		while (1) {
                  if (buf[i] == ' ' || buf[i] == ':')
                    i++;
                  else break;
		}
		sscanf(buf+i, "%d",&screen_h);
		i++;
	}
	if (strncmp(buf + i, "WIDTH",5) == 0) {
		i += strlen("WIDTH");
		while (1) {
			if(buf[i] == ' ' || buf[i] == ':') i++;
			else break;
		}
		sscanf(buf+i, "%d",&screen_w);
	}
  }

  return 0;
}

void NDL_Quit() {
}
