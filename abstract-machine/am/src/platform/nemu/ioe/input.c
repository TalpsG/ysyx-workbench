#include <am.h>
#include <nemu.h>


#define KEYDOWN_MASK 0x8000

void __am_input_keybrd(AM_INPUT_KEYBRD_T *kbd) {
	unsigned int code = inb(KBD_ADDR);
	unsigned int make_code = inl(KBD_ADDR);
	static int wait = 0;
	if (code != 0) {
		if (wait == 1) {
			wait = 0;
			kbd->keydown = AM_KEY_NONE;
			kbd->keydown = false;
		}
		else if ((make_code & 0x8000)) {
			putch('d');
			putch('\n');
			kbd->keycode = code ;
			kbd->keydown = true;
		} else {
			putch('u');
			putch('\n');
			kbd->keydown = AM_KEY_NONE;
			kbd->keydown = false;
			wait = 1;
		}
	} else {
		kbd->keycode = AM_KEY_NONE;
		kbd->keydown = false;
	}
}
