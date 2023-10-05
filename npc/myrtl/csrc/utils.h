#ifndef DD1B04DF_7733_4BFA_946C_24C526BD872D
#define DD1B04DF_7733_4BFA_946C_24C526BD872D

enum state {
  ABORT,
  RUNNING,
  ENDING,
};
void sdb_mainloop();
void print_ins();
void init_ringbuf();
void load_elf();
void print_callbuf();
#endif /* DD1B04DF_7733_4BFA_946C_24C526BD872D */
