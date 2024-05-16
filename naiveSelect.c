#include "naiveSelect.h"

uint32_t select_u32(bool b, uint32_t x, uint32_t y) {
    return b ? x : y;
}
