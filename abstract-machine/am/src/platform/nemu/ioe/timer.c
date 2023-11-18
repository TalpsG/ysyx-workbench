#include <am.h>
#include <nemu.h>
static uint64_t sys_init_time;
void __am_timer_init() {
	sys_init_time = (((uint64_t)inl(RTC_ADDR+4))<<32) | (uint64_t)inl(RTC_ADDR);
}

void __am_timer_uptime(AM_TIMER_UPTIME_T *uptime) {
	uint64_t temp2 = inl(RTC_ADDR+4);
	uint64_t temp1 = inl(RTC_ADDR);
	uptime->us =  ((temp2<<32)+ temp1 )- sys_init_time;
}

void __am_timer_rtc(AM_TIMER_RTC_T *rtc) {
  rtc->second = 0;
  rtc->minute = 0;
  rtc->hour   = 0;
  rtc->day    = 0;
  rtc->month  = 0;
  rtc->year   = 1900;
}
