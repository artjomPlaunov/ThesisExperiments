extern void abort(void);
extern void __assert_fail(const char *, const char *, unsigned int, const char *) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__noreturn__));
void reach_error() { __assert_fail("0", "mod4.c", 10, "reach_error"); }
void assume_abort_if_not(int cond) {
  if(!cond) {abort();}
}
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } }
extern int __VERIFIER_nondet_int(void);
extern void __VERIFIER_assume(int);

int SIZE = 50000001;

int main() {
  int i,j;
  i = 0; j=0;
  while(i<SIZE){ 

    if(__VERIFIER_nondet_int())   
      i = i + 8; 
    else
     i = i + 4;    
      
  }
  j = i/4 ;
  __VERIFIER_assert( ((j * 4)%4) == (i%4));
  return 0;
}