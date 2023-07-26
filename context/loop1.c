

extern void abort(void);
extern void __assert_fail(const char *, const char *, unsigned int, const char *) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__noreturn__));
void reach_error() { __assert_fail("0", "overflow1.c", 10, "reach_error"); }
void assume_abort_if_not(int cond) {
  if(!cond) {abort();}
}
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } }
extern int __VERIFIER_nondet_int(void);
extern void __VERIFIER_assume(int);

#define SIZE 1000

int main()
{
  unsigned int array[SIZE];
  unsigned int index;

  for (index = 0; index < SIZE; index++) {
    array[index] = (index % 2);
  }

  for (index = 0; index < SIZE; index++) {
    if (index % 2 == 0) {
      __VERIFIER_assume(array[index] == 0);
      __VERIFIER_assert(array[index] == 0);
    } else {
      __VERIFIER_assume(array[index] != 0);
      __VERIFIER_assert(array[index] != 0);
    }
  }

}



