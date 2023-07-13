extern void abort(void);
extern void __assert_fail(const char *, const char *, unsigned int, const char *) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__noreturn__));
void reach_error() { __assert_fail("0", "overflow4.c", 10, "reach_error"); }
void assume_abort_if_not(int cond) {
  if(!cond) {abort();}
}
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } }
extern int __VERIFIER_nondet_int(void);
extern void __VERIFIER_assume(int);

int modFlag, res, n1, n2, bound;

int main() {

  modFlag = __VERIFIER_nondet_int();
  res = __VERIFIER_nondet_int();
  
  int n1 = 432;
  int n2 = 4325;
  res = 0;
  bound = __VERIFIER_nondet_int();

  int i = 0;
  while (1) {
    if (i < bound) {

    } else {
      break;
    }

    if (i % n1 == 0) {
      if (i % n2 == 0) {
	res = i;
      }
    }
    i++;
  }
  modFlag = res;

  __VERIFIER_assume(modFlag % 1868400 == 0);
  __VERIFIER_assert(modFlag % 1868400 == 0);

  return 0;
}
