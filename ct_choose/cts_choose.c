
# include <stdlib.h>

int main(int argc, char **argv) {
  int b = (int) argv[0];
  int x = (int) argv[1];
  int y = (int) argv[2];
  int tmp = __builtin_ct_choose(b, x, y);
  return tmp;
}
