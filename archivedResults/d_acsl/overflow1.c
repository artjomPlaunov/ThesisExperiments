#include "__fc_builtin.h"
#include <limits.h>


int main() {
    int x, y, z;
	x = 0;
    y = 0;
    z = Frama_C_interval(INT_MIN,INT_MAX);
	while (z > 0) {
		x = x + 1;
		y = y - 1;
		z = z - 1;
	}
	return 0;
}
