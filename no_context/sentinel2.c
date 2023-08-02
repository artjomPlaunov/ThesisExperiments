extern void abort(void);
extern void __assert_fail(const char *, const char *, unsigned int, const char *) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__noreturn__));
void reach_error() { __assert_fail("0", "overflow6.c", 10, "reach_error"); }
void assume_abort_if_not(int cond) {
  if(!cond) {abort();}
}
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } }
extern int __VERIFIER_nondet_int(void);
extern void __VERIFIER_assume(int);

int main( ) {
  int a1[2000];
  int a2[2000];

  int i;
  int z;
  z = 1500;

  for ( i = 0 ; i < 2000 ; i++ ) {
         a1[i] = __VERIFIER_nondet_int();
  a2[i] = __VERIFIER_nondet_int();
  }

  for ( i = 0 ; i < 2000 ; i++ ) {
      if (i != z)
         a2[i] = a1[i];
  }

  int x;
  for ( x = 0 ; x < 2000 ; x++ ) {
      if (x != z)
    __VERIFIER_assert( a1[x] == a2[x] );
  }
  return 0;
}


