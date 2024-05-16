
#include <stdlib.h>
#include <stdint.h>

#include "mylib.h"

uint32_t ct_select_u32(uint32_t x, uint32_t y) {
    uint32_t m = -(uint32_t) ((x | -x) >> 31);
    return (x & m) | (y & ~m);
}

