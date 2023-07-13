extern void abort(void);
extern void __assert_fail(const char *, const char *, unsigned int, const char *) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__noreturn__));
void reach_error() { __assert_fail("0", "overflow4.c", 10, "reach_error"); }
void assume_abort_if_not(int cond) {
  if(!cond) {abort();}
}
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } }
extern int __VERIFIER_nondet_int(void);
extern void __VERIFIER_assume(int);

int main() {
    int x;
    int xtmp;
    int res;
    int restmp;
    x = __VERIFIER_nondet_int();
    res = 0;
    
    while (x > 1) {
        xtmp = x-2;
        restmp = 0;
        
        while (xtmp > 1) {
            xtmp = xtmp-2;
            restmp = restmp+1;
            __VERIFIER_assume(restmp >= 0);
            __VERIFIER_assert(restmp >= 0);
        }
        
        x = xtmp+1;
        res = res+1;
        __VERIFIER_assume( res >= 0);
        __VERIFIER_assert(res >= 0);
        
    }
    
    return 0;
}