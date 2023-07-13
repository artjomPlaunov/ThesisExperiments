extern void abort(void);
extern void __assert_fail(const char *, const char *, unsigned int, const char *) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__noreturn__));
void reach_error() { __assert_fail("0", "mod1.c", 10, "reach_error"); }
void assume_abort_if_not(int cond) {
  if(!cond) {abort();}
}
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } }
extern int __VERIFIER_nondet_int(void);
extern void __VERIFIER_assume(int);


int modFlag;
int res;

int main() {
modFlag = __VERIFIER_nondet_int();
res = __VERIFIER_nondet_int();

{
  int n1 = 3;
  int n2 = 5;
  int n3 = 7;
  res = 0;
  auto int bound;
  bound = __VERIFIER_nondet_int();
  {
    int i = 0;
    while (1) {
      if (i < bound) {
        }
      else {
        break;
        }
      {
        if (i % n1 == 0) {
          if (i % n2 == 0) {
            if (i % n3 == 0) {
              res = i;
              }
            else {
              }
            }
          else {
            }
          }
        else {
          }
        }
      i ++;
      }
    }
    modFlag = res;

    __VERIFIER_assert(modFlag % 105 == 0);
    
    return 0;
 }}
