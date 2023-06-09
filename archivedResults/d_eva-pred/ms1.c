/*
 * Benchmarks contributed by Divyesh Unadkat[1,2], Supratik Chakraborty[1], Ashutosh Gupta[1]
 * [1] Indian Institute of Technology Bombay, Mumbai
 * [2] TCS Innovation labs, Pune
 *
 */extern void __VERIFIER_assume(int);


extern void abort(void);
extern void __assert_fail(const char *, const char *, unsigned int, const char *) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__noreturn__));
void reach_error() { __assert_fail("0", "ms1.c", 10, "reach_error"); }
extern void abort(void);
void assume_abort_if_not(int cond) {
  if(!cond) {abort();}
}
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } }
extern int __VERIFIER_nondet_int(void);
void* malloc(unsigned int size);

int N;

int main()
{
  N = 10000;
	if(N <= 0) return 1;
    
	int i;
	int sum[1];
	int a[N];

	for(i=0; i<N; i++)
	{
		a[i] = i%1;
	}

	for(i=0; i<N; i++)
	{
		if(i==0) {
			sum[0] = 0;
		} else {
			sum[0] = sum[0] + a[i];
		}
	}
	__VERIFIER_assume(sum[0] == 0);
	__VERIFIER_assert(sum[0] == 0);
	return 1;
}
