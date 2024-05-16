
# include <stdlib.h>
# include <stdbool.h>
# include <stdio.h>

uint32_t select_u32 (bool b, uint32_t x, uint32_t y) {
    return b ? x : y;
}

int main(int argc, char* argv[]) {
    bool b = 1;
    int x = 1;
    int y = 2;

    int v = select_u32(b, x, y);
    printf("Value chosen was: %d\n", v);

    return EXIT_SUCCESS;
}