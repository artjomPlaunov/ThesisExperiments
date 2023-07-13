extern void abort(void);
extern void __assert_fail(const char *, const char *, unsigned int, const char *) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__noreturn__));
void reach_error() { __assert_fail("0", "mod2.c", 10, "reach_error"); }
void assume_abort_if_not(int cond) {
  if(!cond) {abort();}
}
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } }
extern int __VERIFIER_nondet_int(void);
extern void __VERIFIER_assume(int);

int main() {
  unsigned int n,i,k,j,l=0;
  n = __VERIFIER_nondet_uint();
  __VERIFIER_assume(n >= 100);
  __VERIFIER_assume(n <= 1000);
  
  i = 0;
  j = 0;
  k = 0;
  l=0;
  while( l < n ) {
	
          if(l%3 == 0)
	    i = i + 1;
	  else if(l%3 == 1) 
		  j = j+1;
	  else 
	    k = k+1;
    l = l+1;
  }
  int sum = i+j+k;
  __VERIFIER_assert((sum >= 100) && (sum <= 1000));
  return 0;
}

