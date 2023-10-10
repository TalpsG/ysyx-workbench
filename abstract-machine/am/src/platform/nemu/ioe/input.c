#include <am.h>
#include <nemu.h>


#define KEYDOWN_MASK 0x8000

void __am_input_keybrd(AM_INPUT_KEYBRD_T *kbd) {
	unsigned int kbd_reg = inl(KBD_ADDR);
	unsigned int code = kbd_reg &0xff;
	static int wait = 0;
	if (code != 0) {
		if (wait == 1) {
			wait = 0;
			kbd->keycode = AM_KEY_NONE;
			kbd->keydown = false;
		}
		else if ((code & 0x8000)) {
			putch('d');
			putch('\n');
			kbd->keycode = code ;
			kbd->keydown = true;
		} else {
			putch('u');
			putch('\n');
			kbd->keycode = AM_KEY_NONE;
			kbd->keydown = false;
			wait = 1;
		}
	} else {
		kbd->keycode = AM_KEY_NONE;
		kbd->keydown = false;
	}
}
