#include "__fc_builtin.h"
#include <limits.h>

unsigned int f(unsigned int z) {
  return z + 2;
}

int main(void) {
  unsigned int x = 0;

  while (x < 0x0fffffff) {
    x = f(x);
  }

int flag = !(x%2);
  //__VERIFIER_assert(!(x % 2));
}


