#ifndef BC9F3B59_BC7A_4966_9ECC_42E94E580B93
#define BC9F3B59_BC7A_4966_9ECC_42E94E580B93
#define RESET_VECTOR 0x80000000
#define guest_to_host(x) (void *)(mem + x - RESET_VECTOR)
#define MBASE 0x80000000





//#define CONFIG_ITRACE 1
//#define CONFIG_FTRACE 1
#define CONFIG_MTRACE 1
#define CONFIG_DIFFTEST 1
//#define NEMU_DIFFTEST 1
#endif /* BC9F3B59_BC7A_4966_9ECC_42E94E580B93 */
