#include <am.h>
#include <nemu.h>


#define KEYDOWN_MASK 0x8000

void __am_input_keybrd(AM_INPUT_KEYBRD_T *kbd) {
	uint32_t code = 0;
	if (code != 0) {
		printf("keycode :%d\n",code);
		kbd->keycode = code ;
		if ((code & 0xff00) == 0xf000) {
			kbd->keydown = false;
		} else {
			kbd->keydown = true;
		}
	} else {
		kbd->keycode =AM_KEY_NONE;
		kbd->keydown = false;

	}
}
