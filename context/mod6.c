extern void abort(void);
extern void __assert_fail(const char *, const char *, unsigned int, const char *) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__noreturn__));
void reach_error() { __assert_fail("0", "overflow1.c", 10, "reach_error"); }
void assume_abort_if_not(int cond) {
  if(!cond) {abort();}
}
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } }
extern int __VERIFIER_nondet_int(void);
extern void __VERIFIER_assume(int);

int main() {
    int i, n, a, b;
    i = 0; a = 0; b = 0; n = __VERIFIER_nondet_int();
    if(!(n >= 0 && n <= 1000)) return 0;
    while (i < n) {
        if (__VERIFIER_nondet_int()) {
            a = a + 137;
        } else {
            b = b + 432;
        }
        i = i + 1;
    }
    __VERIFIER_assume((a * b)%59184 == 0);
    __VERIFIER_assert((a * b)%59184 == 0);
    return 0;
}

