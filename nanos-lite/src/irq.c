#include <common.h>
int sys_yield() {
  yield();
  return 0;
}
static Context* do_event(Event e, Context* c) {
  switch (e.event) {
	case 1: {
		c->GPRx = sys_yield();
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
