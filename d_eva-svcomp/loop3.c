extern void abort(void);
extern void assert_fail(const char *, const char *, unsigned int, const char *) __attribute ((__nothrow__ , __leaf__)) __attribute ((__noreturn__));
void reach_error() { __assert_fail("0", "mono-crafted_1.c", 3, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } }
extern void __VERIFIER_assume(int);

unsigned int f(unsigned int z) {
  return z + 2;
}

int main(void) {
  unsigned int x = 0;

  while (x < 0x0fffffff) {
    x = f(x);
  }

    __VERIFIER_assume(!(x % 2));
  __VERIFIER_assert(!(x % 2));
}