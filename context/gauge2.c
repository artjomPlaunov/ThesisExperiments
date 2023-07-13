extern void abort(void);
extern void __assert_fail(const char *, const char *, unsigned int, const char *) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__noreturn__));
void reach_error() { __assert_fail("0", "overflow1.c", 10, "reach_error"); }
void assume_abort_if_not(int cond) {
  if(!cond) {abort();}
}
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } }
extern int __VERIFIER_nondet_int(void);
extern void __VERIFIER_assume(int);

int flag;
int i;
int n;
int p;

void main () {

flag = __VERIFIER_nondet_int();
i = __VERIFIER_nondet_int();
n = __VERIFIER_nondet_int();
p = __VERIFIER_nondet_int();

{
  p = 0;
    n = __VERIFIER_nondet_int();
      assume_abort_if_not(n >= 100 && n <= 1000);
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

  __VERIFIER_assume(p >= 1600 && p <= 32000);
  __VERIFIER_assert((p >= 1600) && (p <= 32000));
 }
return;
}
