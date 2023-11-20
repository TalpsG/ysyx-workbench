#include <NDL.h>
#include <SDL.h>

int SDL_OpenAudio(SDL_AudioSpec *desired, SDL_AudioSpec *obtained) {
	printf("%s  %s : %d\n",__FUNCTION__,__FILE__,__LINE__);
  return 0;
}

void SDL_CloseAudio() {
	printf("%s  %s : %d\n",__FUNCTION__,__FILE__,__LINE__);
}

void SDL_PauseAudio(int pause_on) {
	printf("%s  %s : %d\n",__FUNCTION__,__FILE__,__LINE__);
}

void SDL_MixAudio(uint8_t *dst, uint8_t *src, uint32_t len, int volume) {
	printf("%s  %s : %d\n",__FUNCTION__,__FILE__,__LINE__);
}

SDL_AudioSpec *SDL_LoadWAV(const char *file, SDL_AudioSpec *spec, uint8_t **audio_buf, uint32_t *audio_len) {
	printf("%s  %s : %d\n",__FUNCTION__,__FILE__,__LINE__);
  return NULL;
}

void SDL_FreeWAV(uint8_t *audio_buf) {
	printf("%s  %s : %d\n",__FUNCTION__,__FILE__,__LINE__);
}

void SDL_LockAudio() {
	printf("%s  %s : %d\n",__FUNCTION__,__FILE__,__LINE__);
}

void SDL_UnlockAudio() {
	printf("%s  %s : %d\n",__FUNCTION__,__FILE__,__LINE__);
}
