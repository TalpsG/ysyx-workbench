#include <am.h>
#include <nemu.h>


#define KEYDOWN_MASK 0x8000
void __am_input_keybrd(AM_INPUT_KEYBRD_T *kbd) {
	unsigned int kbd_reg = inl(KBD_ADDR);
	unsigned char code = kbd_reg&0xff;
	if (kbd_reg== AM_KEY_NONE) {
		kbd->keycode = AM_KEY_NONE;
		kbd->keydown = false;
		return ;
	}
	if ((kbd_reg>>8)== 0x80) {
		kbd->keycode = code ;
		kbd->keydown = true;
	} else {
		kbd->keycode = code ;
		kbd->keydown = false;
	}
    
}
