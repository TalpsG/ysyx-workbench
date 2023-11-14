#ifndef A4825395_5AFB_41D7_BF88_53A2D2E23B62
#define A4825395_5AFB_41D7_BF88_53A2D2E23B62

#include <common.h>
size_t ramdisk_read(void *buf, size_t offset, size_t len);
size_t ramdisk_write(const void *buf, size_t offset, size_t len);

void init_ramdisk();

size_t get_ramdisk_size();
extern uint8_t ramdisk_start;
extern uint8_t ramdisk_end;
#define RAMDISK_SIZE ((&ramdisk_end) - (&ramdisk_start))



#endif /* A4825395_5AFB_41D7_BF88_53A2D2E23B62 */
