#include <common.h>
void do_syscall(Context *c);
static Context* do_event(Event e, Context* c) {
  switch (e.event) {
	case EVENT_YIELD: {
		printf("yield\n");
		yield();
		break;
	}
	case EVENT_SYSCALL: {
		do_syscall(c);
		break;
	}
    default: panic(" nanos Unhandled event ID = %d", e.event);
  }

  return c;
}

void init_irq(void) {
  Log("Initializing interrupt/exception handler...");
  cte_init(do_event);
}
