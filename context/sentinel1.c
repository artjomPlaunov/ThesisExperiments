extern void abort(void);
extern void __assert_fail(const char *, const char *, unsigned int, const char *) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__noreturn__));
void reach_error() { __assert_fail("0", "sentinel1.c", 10, "reach_error"); }
void assume_abort_if_not(int cond) {
  if(!cond) {abort();}
}
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } }
extern int __VERIFIER_nondet_int(void);
extern void __VERIFIER_assume(int);
int main ( ) {
int a[100000];
int marker = 42;
int pos = 543;
for(int i = 0; i < 100000; i++)
{
a[i] = 41;
}
if ( pos >= 0 && pos < 100000 ) {
a[ pos ] = marker;
int i = 0;
while( a[ i ] != marker ) {
i = i + 1;
}
__VERIFIER_assume( i == pos );
__VERIFIER_assert( i == pos );
}
return 0;
}






