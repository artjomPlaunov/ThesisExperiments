extern void abort(void);
extern void __assert_fail(const char *, const char *, unsigned int, const char *) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__noreturn__));
void reach_error() { __assert_fail("0", "overflow5.c", 10, "reach_error"); }
void assume_abort_if_not(int cond) {
  if(!cond) {abort();}
}
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } }
extern int __VERIFIER_nondet_int(void);
void* malloc(unsigned int size);

 int f(int a) {
    int tmp, count = 0;
    while(a > 1) {
      tmp = a % 2;
      if(tmp == 0) a = a / 2;
      else a = a - 1;
      count++;
    }
    return count;
  }
  
int main() {
    int x = __VERIFIER_nondet_int();
    int count = f(x);
    __VERIFIER_assert(count >= 0);
    return count;
  }
