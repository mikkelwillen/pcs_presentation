# include <stdlib.h>
# include <stdbool.h>
# include <stdio.h>
# include <stdint.h>

# include "mylib.h"

int main(void) {
    uint32_t x = 1;
    uint32_t y = 2;
    ct_select_u32(x, y);
    return EXIT_SUCCESS;
}

// uint32_t ct_select_u32(uint32_t x, uint32_t y) {
//     uint32_t m = -(uint32_t) ((x | -x) >> 31);
//     return (x & m) | (y & ~m);
// }
