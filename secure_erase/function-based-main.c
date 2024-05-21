#include <stdio.h>
#include <stdlib.h>

int foo(int a) {
	if ( a == 2) {
		printf("Winner\n");
		return 0;
	}
	if (a > 0) return -1;
	return -2;
}

int main(int argc, char * argv[]) {

	if ( !(argc > 1) ) {
		printf("Usage: %s <num>\n", argv[0]);
		return -1;
	}

	int v = atoi(argv[1]);
	int ret = foo(v);
	return ret;
}
