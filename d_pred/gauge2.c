// Automatically generated by cegarmc
//
#include <assert.h>
extern void __VERIFIER_assume(int);
extern void abort(void);
extern void __assert_fail(const char *, const char *, unsigned int, const char *) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__noreturn__));
void reach_error() { __assert_fail("0", "sumt3.c", 3, "reach_error"); }
extern void abort(void);
void assume_abort_if_not(int cond) {
  if(!cond) {abort();}
}
void __VERIFIER_assert(int cond) {
  if (!(cond)) {
    ERROR: {reach_error();abort();}
  }
  return;
}
unsigned int __VERIFIER_nondet_int();
int flag;
int i;
int n;
int p;

void main () {
    p = 0;
    n = __VERIFIER_nondet_int();
    __VERIFIER_assume(n >= 100);
    __VERIFIER_assume(n <= 1000);
    flag = __VERIFIER_nondet_int();
    i = 0;
    while (1) {
      if (i < n) {
      } else {
	break;
      }
      if (flag) {
        p += 16;
      } else {
        p += 32;
      }
    i ++;
    }
  
  __VERIFIER_assert(p >= 1600 && p <= 32000);
}
