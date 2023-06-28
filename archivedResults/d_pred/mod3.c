#include <assert.h>

extern int __VERIFIER_nondet_int();

int modFlag, res, n1, n2, bound;

void error();
void error() {
  goto ERROR;
 ERROR: ;
  return;
}

int main() {

  modFlag = __VERIFIER_nondet_int();
  res = __VERIFIER_nondet_int();
  
  int n1 = 432;
  int n2 = 4325;
  res = 0;
  bound = __VERIFIER_nondet_int();

  int i = 0;
  while (1) {
    if (i < bound) {

    } else {
      break;
    }

    if (i % n1 == 0) {
      if (i % n2 == 0) {
	res = i;
      }
    }
    i++;
  }
  modFlag = res;

  if (modFlag % 1868400 == 0) {

  } else {
    error();
  }

  return 0;
}
