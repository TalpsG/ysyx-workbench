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
	assert(B == 0);
	fixedpt A_neg = (~A)+1;
	fixedpt B_neg = fixedpt_floor(A);
	assert(B_neg == A_neg);
	B_neg = A_neg +1;
	assert(B_neg == A_neg);
	B_neg = A_neg -1;
	assert(B_neg == ((~(2<<8))+1));


  return 0;
}
