# include <stdlib.h>
# include <stdio.h>
# include <string.h>

int use_buffer(char a) {
    char buf[100] = {0};
    int retval = 0;

    // ... Fill buffer ...
    memset(buf, a, 100);

    // ... Do something with buffer ...
    for (unsigned i = 0; i < 100; i++) {
        retval += buf[i];
    }

    // ... Erase buffer secrets ...
    memset(buf, 0, 100);
    return retval;
}

int main(int argc, char **argv) {
    char a = argv[1][0];
    int ret = use_buffer(a);
    printf("result is %d\n", ret);
    return EXIT_SUCCESS;
}

// https://godbolt.org
// x86-64 clang 3.0.0
// -O0 -m32 -march=i386