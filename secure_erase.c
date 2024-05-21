
#include <stdlib.h>
#include <string.h>

void use_buffer(int a) {
    int buf[10] = {0};
    memset(buf, a, 10);
    /* does something  with buffer*/
    memset(buf, 0, 10);
    return;
}

int main(void) {
    int a = 2;
    use_buffer(a);
    return 0;
}