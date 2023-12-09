 
#include <riscv/riscv.h>
#define DEVICE_BASE 0xa0000000
 
#define MMIO_BASE 0xa0000000
 
#define SERIAL_PORT     (DEVICE_BASE + 0x00003f8)
#define KBD_ADDR        (DEVICE_BASE + 0x0000060)
#define RTC_ADDR        (DEVICE_BASE + 0x0000048)
#define VGACTL_ADDR     (DEVICE_BASE + 0x0000100)
 