#include <assert.h>
#include <stdio.h>
#include <sys/time.h>
#include </home/talps/gitrepo/ysyx-workbench/navy-apps/libs/libfixedptc/include/fixedptc.h>
int main() {
	printf("malloc start\n");
	char *p = malloc(1);
	printf("malloc end\n");
	printf("%p\n",p);
	assert(p);
  return 0;
}
