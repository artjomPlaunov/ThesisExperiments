#include "__fc_builtin.h"
#include <limits.h>

 int f(int a) {
    int tmp, count = 0;
    while(a > 1) {
      tmp = a % 2;
      if(tmp == 0) a = a / 2;
      else a = a - 1;
      count++;
    }
    return count;
  }
  
int main() {
    int x = Frama_C_interval(INT_MIN, INT_MAX);
    int count = f(x);
    return count;
  }
