#include "__fc_builtin.h"
#include <limits.h>

int main() {
    int c;
    int x, y;
    x = Frama_C_inteval(INT_MIN, INT_MAX);
    y = Frama_C_inteval(INT_MIN, INT_MAX);
    c = 0;
    while ((x == y) && (x > 0)) {
        while (y > 0) {
            x = x - 1;
            y = y - 1;
            c = c + 1;
        }
    }
    return 0;
}
