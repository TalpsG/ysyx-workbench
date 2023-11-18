#include <stdio.h>
#include <sys/time.h>
#include <NDL.h>
int main() {
	NDL_Init(0);
	struct timeval tv;
	int times= 1;
    while (1) {
		unsigned int now = NDL_GetTicks(); 
		printf("now : %d\n",now);
		if (now >= 500 * times) {
			printf("times:%d",times++);
		}
	}
  return 0;
}
