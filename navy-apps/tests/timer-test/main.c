#include <stdio.h>
#include <sys/time.h>
int main() {
	struct timeval t;
	gettimeofday(&t, NULL);
	uint64_t time = t.tv_usec;
	uint32_t *p = &t.tv_usec;
	while (1) {
		gettimeofday(&t, NULL);
		if (t.tv_usec - time > 500000 ) {
			printf("0.5sec\n")	;
			time = t.tv_usec;
		}
	}
  return 0;
}
