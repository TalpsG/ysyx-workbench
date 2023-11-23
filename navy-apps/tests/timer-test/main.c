#include <stdio.h>
#include <NDL.h>
int main() {
	struct timeval t;
	NDL_Init(0);
	gettimeofday(&t, NULL);
	uint32_t time = NDL_GetTicks();
	int i= 1;
	while (1) {
		if (NDL_GetTicks() - time > 500) {
			time = NDL_GetTicks();
			printf("%d half\n",i++);
		}
	}
  return 0;
}
