#include <assert.h>
#include <stdio.h>
#include <sys/time.h>
#include </home/talps/gitrepo/ysyx-workbench/navy-apps/libs/libfixedptc/include/fixedptc.h>
int main() {
	fixedpt A = 1<<8;
	fixedpt B = fixedpt_floor(A);
	assert(B == (1<<8));
	B = fixedpt_ceil(A);
	assert(B == A);
	fixedpt C = A+1;
	B = fixedpt_floor(C);
	assert(B == (1<<8));
	B = fixedpt_ceil(C);
	assert(B == (2<<8));
	C = A-1;
	B = fixedpt_floor(C);
	assert(B == 0);
	B = fixedpt_ceil(C);
	assert(B == A);
	fixedpt A_neg = (~A)+1;
	fixedpt B_neg = fixedpt_floor(A_neg);
	fixedpt C_neg ;
	assert(B_neg == A_neg);
	B_neg = fixedpt_ceil(A_neg);
	assert(B_neg == A_neg);
	B_neg = A_neg +1;
	C_neg = fixedpt_floor(B_neg);
	assert(C_neg == A_neg);
	B_neg = fixedpt_ceil(B_neg);
	assert(B_neg == 0);
	B_neg = A_neg -1;
	C_neg = fixedpt_floor(B_neg);
	printf("%p %p\n",A_neg,C_neg);
	assert(C_neg == ((~(2<<8))+1));
	B_neg = fixedpt_ceil(B_neg);
	assert(B_neg == A_neg);


  return 0;
}
