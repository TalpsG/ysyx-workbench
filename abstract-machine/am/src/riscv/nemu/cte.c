#include <am.h>
#include <riscv/riscv.h>
#include <arch/riscv.h>
#include <klib.h>

static Context* (*user_handler)(Event, Context*) = NULL;

Context* __am_irq_handle(Context *c) {
  if (user_handler) {
    Event ev = {0};
    switch (c->GPR1) {
		case 0xffffffff: {
			ev.event = EVENT_YIELD;
			c->mepc += 4;
			c->mcause = 0xb; 
			break;
		}
		case 0x0:
		case 0x1: {
			ev.event = EVENT_SYSCALL;
			c->mepc += 4;
			break;
		}
		default: {
			ev.event = EVENT_ERROR;
			c->mepc += 4;
			break;
		}
    }

    c = user_handler(ev, c);
    assert(c != NULL);
  }

  return c;
}

extern void __am_asm_trap(void);

bool cte_init(Context*(*handler)(Event, Context*)) {
  // initialize exception entry
  asm volatile("csrw mtvec, %0" : : "r"(__am_asm_trap));

  // register event handler
  user_handler = handler;

  return true;
}


// kstack 是线程栈，entry是线程的入口，args是参数
Context *kcontext(Area kstack, void (*entry)(void *), void *arg) {
	Context *p = kstack.end - sizeof(Context);
	p->mepc = (unsigned int)entry;
	p->gpr[10] = (unsigned int)arg;
  return p;
}

void yield() {
#ifdef __riscv_e
  asm volatile("li a5, -1; ecall");
#else
  asm volatile("li a7, -1; ecall");
#endif
}

bool ienabled() {
  return false;
}

void iset(bool enable) {
}
