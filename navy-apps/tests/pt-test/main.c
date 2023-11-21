#include <assert.h>
#include <stdio.h>
#include <sys/time.h>
#include </home/talps/gitrepo/ysyx-workbench/navy-apps/libs/libfixedptc/include/fixedptc.h>
int main() {
	char *p = malloc(1);
	printf("%p\n",p);
	assert(p);
  return 0;
}
