#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/time.h>

static int evtdev = -1;
static int fbdev = -1;
static int screen_w = 0, screen_h = 0;
static uint32_t sys_init_time ;
static int event_fd ;
uint32_t NDL_GetTicks() {
  struct timeval temp;
  gettimeofday(&temp,NULL);
  uint32_t now = temp.tv_usec/1000;
  return now - sys_init_time;
}

int NDL_PollEvent(char *buf, int len) {
	return read(event_fd, buf, len);
}

void NDL_OpenCanvas(int *w, int *h) {
  if (getenv("NWM_APP")) {
    int fbctl = 4;
    fbdev = 5;
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
  }
  printf("%d %d",*w,*h);
}

void NDL_DrawRect(uint32_t *pixels, int x, int y, int w, int h) {
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
  struct timeval temp;
  gettimeofday(&temp,NULL);
  sys_init_time = temp.tv_usec/1000;
  event_fd = open("/dev/events",0,0);
  int dispinfo_fd = open("/proc/dispinfo",0,0);
  char str[30];
  read(dispinfo_fd, str, 30);
  int len =strlen(str);
  char h[]= "HEIGHT";
  char w[]= "WIDTH";
  for (int i = 0; i < len;) {
    if (strncmp(h, str + i, strlen(h)) == 0) {
		i += strlen(h);
		while(str[i] == ' ' || str[i] == ':') i++;
		sscanf(str+i,"%d",&screen_h);
		while(str[i]!='\n' && i<len) i++;
		i++;
		if(i>=len) break;
    } else if (strncmp(w, str + i, strlen(w)) == 0) {
		i += strlen(w);
		while(str[i] == ' ' || str[i] == ':') i++;
		sscanf(str+i,"%d",&screen_w);
		while(str[i]!='\n'&&i<len) i++;
		i++;
		if(i>=len) break;
	}
  }
  return 0;
}

void NDL_Quit() {
	close(event_fd);
}
