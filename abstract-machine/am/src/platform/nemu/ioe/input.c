#include <am.h>
#include <nemu.h>


#define KEYDOWN_MASK 0x8000

void __am_input_keybrd(AM_INPUT_KEYBRD_T *kbd) {
	int code = inb(KBD_ADDR);
	int code2= inb(KBD_ADDR+1);
	static int wait = 0;
	if (code != 0) {
		if (wait == 1) {
			wait = 0;
			kbd->keydown = AM_KEY_NONE;
			kbd->keydown = false;
		}
		else if (code2  == 0x80) {
			kbd->keydown = AM_KEY_NONE;
			kbd->keydown = false;
			wait = 1;
		} else {
			kbd->keycode = code ;
			kbd->keydown = true;
		}
		printf("keycode :%d ",code);
		printf("%s\n",kbd->keydown?"down":"release");
	} else {
		kbd->keycode = AM_KEY_NONE;
		kbd->keydown = false;
	}
}
