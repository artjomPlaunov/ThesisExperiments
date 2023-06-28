/* Benchmark used to verify Chimdyalwar, Bharti, et al. "VeriAbs: Verification by abstraction (competition contribution)." 
International Conference on Tools and Algorithms for the Construction and Analysis of Systems. Springer, Berlin, Heidelberg, 2017.*/

#define SIZE 1000
extern void abort(void);
extern void __VERIFIER_assume(int);
void reach_error() { assert(0); }
void __VERIFIER_assert(int cond)
{
  if (!(cond)) {
    ERROR: {reach_error();abort();}
  }
  return;
}

int main()
{
  unsigned int array[SIZE];
  unsigned int index;
  unsigned int flag;

  for (index = 0; index < SIZE; index++) {
    array[index] = (index % 2);
  }

  for (index = 0; index < SIZE; index++) {
    if (index % 2 == 0) {
      flag = array[index];
    } else {
      __VERIFIER_assume(flag == 0);
      __VERIFIER_assert(flag == 0);
      flag = array[index];
      __VERIFIER_assume(flag == 1);
      __VERIFIER_assert(flag == 1);
      //__VERIFIER_assert(array[index] != 0);
    }
  }

}



