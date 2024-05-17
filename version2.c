// run in godbolt.org with
// compiler: x8664 clang rocm-5.3.3
// flags: -O[0-3] -m32 -march=i386

# include <stdint.h>

uint32_t ct_select_u32(uint32_t x, uint32_t y, bool bit) {
    uint32_t m = -(uint32_t) ((x | -x) >> 31);
    return (x & m) | (y & ~m);
}
