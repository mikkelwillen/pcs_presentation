
#include <time.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int use_buffer(void) {
    char buf[500];
    int retval = 0;

    // ... Fill buffer ...
    for (unsigned i = 0; i < 500; i++) {
        buf[i] = rand();
    }

    // ... Do something with buffer ...
    for (unsigned i = 0; i < 500; i++) {
        retval += buf[i];
    }

    // ... Erase buffer secrets ...
    for (unsigned i = 0; i < 500; i++) {
        buf[i] = 0;
    }

    return retval;
}

int main(int argc, char **argv) {
    srand(time(NULL));
    int ret = use_buffer();
    
    printf("result is %d\n", ret);
    return EXIT_SUCCESS;
}