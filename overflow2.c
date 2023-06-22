#include "__fc_builtin.h"
#include <limits.h>

int main() {
    int x;
    int y;
    x = Frama_C_inteval(INT_MIN, INT_MAX);
    y = Frama_C_interval(INT_MIN, INT_MAX);
    
    while (x == y && x > 0) {
        while (y > 0) {
            x = x-1;
            y = y-1;
        }
    }
    
    return 0;
}
