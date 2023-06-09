
extern void abort(void);
extern void __assert_fail(const char *, const char *, unsigned int, const char *) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__noreturn__));
void reach_error() { __assert_fail("0", "ms1.c", 10, "reach_error"); }
extern void abort(void);
void assume_abort_if_not(int cond) {
  if(!cond) {abort();}
}
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } }
extern int __VERIFIER_nondet_int(void);

extern void __VERIFIER_assume(int);



int N;

int main()
{
  int Y,X,D,S,R,flag;
  
  Y = 0;

  while (1) {
    X = __VERIFIER_nondet_int();
    assume_abort_if_not(X >= -1000 && X <= 1000);
    D = __VERIFIER_nondet_int();
    assume_abort_if_not(D >= 0 && D <= 16);

    S = Y;
    R = X-S;
    Y = X;

    if (R <= -D) {
      Y = S-D;
    } else if (D <= R) {
      Y = S+D;
    }
    __VERIFIER_assume(Y >= -1000 && Y <= 1000);
    __VERIFIER_assert(Y >= -1000 && Y <= 1000);
  }
}
