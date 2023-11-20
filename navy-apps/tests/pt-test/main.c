#include <assert.h>
#include <stdio.h>
#include <sys/time.h>
#include </home/talps/gitrepo/ysyx-workbench/navy-apps/libs/libfixedptc/include/fixedptc.h>
int main() {
	fixedpt A = 1<<8;
	fixedpt B = fixedpt_floor(A);
	assert(B == (1<<8));
	fixedpt C = A+1;
	B = fixedpt_floor(C);
	assert(B == (1<<8));
	C = A-1;
	B = fixedpt_floor(C);
	printf("%p\n",B);
	assert(B == 0);

  return 0;
}
