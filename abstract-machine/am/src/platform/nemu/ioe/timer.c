#include <am.h>
#include <nemu.h>

void __am_timer_init() {
}

void __am_timer_uptime(AM_TIMER_UPTIME_T *uptime) {
	uint64_t temp1 = inw(RTC_ADDR);
	uint64_t temp2 = inw(RTC_ADDR+4);
	uptime->us =  temp1;
	printf("%p\n",temp2);
	//char *p =(char *) &(uptime->us);
	//for (int i = 0; i < 8; i++) {
		//p[i] = inb(RTC_ADDR+i);
	//}
}

void __am_timer_rtc(AM_TIMER_RTC_T *rtc) {
  rtc->second = 0;
  rtc->minute = 0;
  rtc->hour   = 0;
  rtc->day    = 0;
  rtc->month  = 0;
  rtc->year   = 1900;
}
