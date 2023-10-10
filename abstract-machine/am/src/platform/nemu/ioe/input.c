#include <am.h>
#include <nemu.h>


#define KEYDOWN_MASK 0x8000

void __am_input_keybrd(AM_INPUT_KEYBRD_T *kbd) {
	unsigned int code = inb(KBD_ADDR);
	static int wait = 0;
	if (code != 0) {
		if (wait == 1) {
			wait = 0;
			kbd->keydown = AM_KEY_NONE;
			kbd->keydown = false;
		}
		else if ((code )) {
			kbd->keycode = code ;
			kbd->keydown = true;
		} else {
			kbd->keydown = AM_KEY_NONE;
			kbd->keydown = false;
			wait = 1;
		}
	} else {
		kbd->keycode = AM_KEY_NONE;
		kbd->keydown = false;
	}
}
