#include <am.h>
#include <nemu.h>


#define KEYDOWN_MASK 0x8000
static int wait = 0;
void __am_input_keybrd(AM_INPUT_KEYBRD_T *kbd) {
	unsigned int kbd_reg = inl(KBD_ADDR);
	unsigned int code = kbd_reg &0xff;
	if (code != 0) {
		if (wait == 1) {
			wait = 0;
			return;
		}
		else if ((kbd_reg & KEYDOWN_MASK)) {
			kbd->keycode = code ;
			kbd->keydown = true;
			wait = 0;
		} else {
			kbd->keycode = AM_KEY_NONE;
			kbd->keydown = false;
			wait = 1;
		}
	} else {
		kbd->keycode = AM_KEY_NONE;
		kbd->keydown = false;
		wait = 0;
	}
}
