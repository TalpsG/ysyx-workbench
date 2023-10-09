#include <am.h>
#include <nemu.h>


#define KEYDOWN_MASK 0x8000

void __am_input_keybrd(AM_INPUT_KEYBRD_T *kbd) {
	int code = inl(KBD_ADDR);
	static int wait = 0;
	if (code != 0) {
		printf("keycode :%d\n",code);
		if (wait == 1) {
			wait = 0;
			return ;
		}
		if (code  == 0xf0) {
			kbd->keydown = AM_KEY_NONE;
			kbd->keydown = false;
			wait = 1;
		} else {
			kbd->keycode = code ;
			kbd->keydown = true;
		}
	} else {
		kbd->keycode =AM_KEY_NONE;
		kbd->keydown = false;
	}
}
