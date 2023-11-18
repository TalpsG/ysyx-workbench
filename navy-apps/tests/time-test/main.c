#include <stdio.h>
#include <sys/time.h>

int main() {
	struct timeval tv;
	int half = 500000;
	int times = 1;
    while (1) {
         gettimeofday(&tv, NULL) ;
         if (tv.tv_usec > half * times) {
           times++;
           printf("times:%d\n",times);
		 }
	}
  return 0;
}
