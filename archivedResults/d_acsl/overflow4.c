#include "__fc_builtin.h"
#include <limits.h>

int main() {
    int x;
    int xtmp;
    int res;
    int restmp;
    x = Frama_C_inteval(INT_MIN, INT_MAX);
    res = 0;
    
    while (x > 1) {
        xtmp = x-2;
        restmp = 0;
        
        while (xtmp > 1) {
            xtmp = xtmp-2;
            restmp = restmp+1;
        }
        
        x = xtmp+1;
        res = res+1;
        
    }
    
    return 0;
}