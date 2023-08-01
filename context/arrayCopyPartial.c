extern void abort(void);
extern void __assert_fail(const char *, const char *, unsigned int, const char *) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__noreturn__));
void reach_error() { __assert_fail("0", "overflow1.c", 10, "reach_error"); }
void assume_abort_if_not(int cond) {
  if(!cond) {abort();}
}
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } }
extern int __VERIFIER_nondet_int(void);
extern void __VERIFIER_assume(int);

int main()
{
  int a[3000];
  int b[3000];
  int i = 0;
  int j = 0;
  while( i < 3000 )
  {
	b[i] = __VERIFIER_nondet_int();
    assume_abort_if_not(b[i] >= 100 && b[i] <= 1000);
    i = i+1;
  }
  i = 0;
  while( i < 3000 )
  {
 a[j] = b[i];
        i = i+1;
        j = j+1;
  }
  i = 0;
  j = 0;
  while( i < 3000 )
  {

        if (i < 2000) {
            __VERIFIER_assume( a[j] + b[j] >= 200);
            
        }
            __VERIFIER_assert( a[j] + b[j] >= 200 );
            i = i+1;
            j = j+1;
  }
  return 0;
}


