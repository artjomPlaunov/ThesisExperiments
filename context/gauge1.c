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
  int y = 0;
  int n = __VERIFIER_nondet_int();
  assume_abort_if_not(n >= 100 && n <= 1000);
  for (int i=0; i < n; i++) {
    y += 2;
  }
  __VERIFIER_assume((y >= 200) && (y <= 2000));
  __VERIFIER_assert((y >= 200) && (y <= 2000));
  return 0;
}

