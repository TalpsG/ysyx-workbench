#include <am.h>
#include <nemu.h>

#define KEYDOWN_MASK 0x8000

void __am_input_keybrd(AM_INPUT_KEYBRD_T *kbd) {
	unsigned int code = inl(KBD_ADDR);
	kbd->keycode = code ;
	if (code != 0) {
		if ((code & 0xff00) == 0xf000) {
			kbd->keydown = false;
		} else {
			kbd->keydown = true;
		}
	}
}
