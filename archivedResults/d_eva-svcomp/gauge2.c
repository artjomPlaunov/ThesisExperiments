// Automatically generated by cegarmc
//
#include <assert.h>

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


extern void __VERIFIER_assume(int);
extern int __VERIFIER_nondet_bool();
extern char __VERIFIER_nondet_char();
extern signed char __VERIFIER_nondet_schar();
extern unsigned char __VERIFIER_nondet_uchar();
extern int __VERIFIER_nondet_int();
extern unsigned int __VERIFIER_nondet_uint();
extern short __VERIFIER_nondet_short();
extern unsigned short __VERIFIER_nondet_ushort();
extern long __VERIFIER_nondet_long();
extern unsigned long __VERIFIER_nondet_ulong();
extern long long __VERIFIER_nondet_longlong();
extern unsigned long long __VERIFIER_nondet_ull();
extern float __VERIFIER_nondet_float();
extern double __VERIFIER_nondet_double();
extern long double __VERIFIER_nondet_longdouble();
extern void * __VERIFIER_nondet_pointer();

int flag;
int i;
int n;
int p;

void error();


void error() {
  {
  goto ERROR;
  ERROR: ;
  return;
  }
}

void main () {
//
// Number of lvals: 7
//   Frama_C_interval: int (int min, int max)
//      int (int min, int max)
//   error: void (void)
//      void (void)
//   p: int
//      int
//   i: int
//      int
//   n: int
//      int
//   flag: int
//      int
//   watch: int
//      int
//

flag = __VERIFIER_nondet_int();
i = __VERIFIER_nondet_int();
n = __VERIFIER_nondet_int();
p = __VERIFIER_nondet_int();



{
  p = 0;
    n = __VERIFIER_nondet_int();
    __VERIFIER_assume(n >= 100);
    __VERIFIER_assume(n <= 1000);
    flag = __VERIFIER_nondet_int();
  i = 0;
  while (1) {
    if (i < n) {
      }
    else {
      break;
      }
    {
      if (flag) {
        p += 16;
        }
      else {
        p += 32;
        }
      }
    i ++;
    }

  __VERIFIER_assume(p >= 1600);
  __VERIFIER_assume(p <= 32000);
  
  if (p < 1600 || p > 32000) {
    error();
  }
 }
CMCGOODEND:
assert (1 == 1);
CMCBADEND:  return;
}
