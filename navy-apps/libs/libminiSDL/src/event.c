#include <NDL.h>
#include <SDL.h>
#include <stdio.h>

#define keyname(k) #k,

static const char *keyname[] = {
  "NONE",
  _KEYS(keyname)
};

int SDL_PushEvent(SDL_Event *ev) {
	printf("%s  %s : %d\n",__FUNCTION__,__FILE__,__LINE__);
  return 0;
}

int SDL_PollEvent(SDL_Event *ev) {
	printf("poll\n");
	char buf[20];
	int ret = NDL_PollEvent(buf,20);
	if(ret == 0) return 0;
	printf("catch!\n");
	int keydown, code;
	printf("scanf\n");
	sscanf(buf,"%d %d" ,keydown,code); 
	printf("scan over\n");
	ev->type = keydown?SDL_KEYDOWN:SDL_KEYUP;
	ev->key.keysym.sym = code;
	return 1;
}

int SDL_WaitEvent(SDL_Event *event) {
	char buf[100] ;
	while(1) {
		int ret = NDL_PollEvent(buf,100);
        if (ret) {
			int keydown,code;
			sscanf(buf,"%d %d",&keydown,&code);
			event->type = keydown? SDL_KEYDOWN:SDL_KEYUP;
			event->key.keysym.sym = code;
			event->key.type = keydown? SDL_KEYDOWN:SDL_KEYUP;
			break;
		}
	}
  return 1;
}

int SDL_PeepEvents(SDL_Event *ev, int numevents, int action, uint32_t mask) {
	printf("%s  %s : %d\n",__FUNCTION__,__FILE__,__LINE__);
  return 0;
}

uint8_t* SDL_GetKeyState(int *numkeys) {
	printf("%s  %s : %d\n",__FUNCTION__,__FILE__,__LINE__);
  return NULL;
}
