extern void abort(void);
extern void __assert_fail(const char *, const char *, unsigned int, const char *) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__noreturn__));
void reach_error() { __assert_fail("0", "overflow1.c", 10, "reach_error"); }
void assume_abort_if_not(int cond) {
  if(!cond) {abort();}
}
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } }
extern int __VERIFIER_nondet_int(void);
extern void __VERIFIER_assume(int);
extern unsigned char __VERIFIER_nondet_uchar(void);

int main() {
  unsigned char n = __VERIFIER_nondet_uchar();
  if (n == 0) {
    return 0;
  }
  unsigned char v = 0;
  unsigned int  s = 0;
  unsigned int  i = 0;
  while (i < n) {
    v = __VERIFIER_nondet_uchar();
    s += v;
    ++i;
  }
  if (s < v) {
    reach_error();
    return 1;
  }
  __VERIFIER_assert(s < 65026);
  return 0;
}


