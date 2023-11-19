#include <sdl-file.h>

SDL_RWops* SDL_RWFromFile(const char *filename, const char *mode) {
	printf("%s  %s : %d",__FUNCTION__,__FILE__,__LINE__);
  return NULL;
}

SDL_RWops* SDL_RWFromMem(void *mem, int size) {
	printf("%s  %s : %d",__FUNCTION__,__FILE__,__LINE__);
  return NULL;
}
