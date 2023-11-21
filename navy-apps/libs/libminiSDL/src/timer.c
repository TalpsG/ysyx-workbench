#include <NDL.h>
#include <sdl-timer.h>
#include <stdio.h>

SDL_TimerID SDL_AddTimer(uint32_t interval, SDL_NewTimerCallback callback, void *param) {
	printf("%s  %s : %d\n",__FUNCTION__,__FILE__,__LINE__);
  return NULL;
}

int SDL_RemoveTimer(SDL_TimerID id) {
	printf("%s  %s : %d\n",__FUNCTION__,__FILE__,__LINE__);
  return 1;
}

uint32_t SDL_GetTicks() {
	return NDL_GetTicks();
}

void SDL_Delay(uint32_t ms) {
	printf("%s  %s : %d\n",__FUNCTION__,__FILE__,__LINE__);
}
