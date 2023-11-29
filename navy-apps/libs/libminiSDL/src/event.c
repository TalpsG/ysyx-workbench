#include <NDL.h>
#include <SDL.h>
#include <stdio.h>

#define keyname(k) #k,
static uint8_t key_table[83]={0};

static const char *keyname[] = {
  "NONE",
  _KEYS(keyname)
};

int SDL_PushEvent(SDL_Event *ev) {
  return 0;
}

int SDL_PollEvent(SDL_Event *ev) {
	char buf[50];
	if (NDL_PollEvent(buf, 50)) {
		if(ev == NULL) return 1;
		int keycode,keydown;
		sscanf(buf,"%d %d" ,&keydown,&keycode); 
		ev->type = keydown?SDL_KEYDOWN:SDL_KEYUP;
		ev->key.keysym.sym = keycode;
		key_table[keycode] = 1;
		return 1;
	}
	return 0;
}

int SDL_WaitEvent(SDL_Event *event) {
	char buf[50];
	while (1) {
		if (NDL_PollEvent(buf, 50)) {
			if(event == NULL) return 1;
			int keycode,keydown;
			sscanf(buf,"%d %d" ,&keydown,&keycode); 
			event->type = keydown?SDL_KEYDOWN:SDL_KEYUP;
			event->key.keysym.sym = keycode;
			key_table[keycode] = 1;
			return 1;
		}
	}
  return 0;
}

int SDL_PeepEvents(SDL_Event *ev, int numevents, int action, uint32_t mask) {
  return 0;
}
uint8_t* SDL_GetKeyState(int *numkeys) {
	if (numkeys != NULL) {
		*numkeys = 83;
	}
	return key_table;
}
