#include "__fc_builtin.h"
#include "limits.h"
#include <stddef.h>
#include <stdlib.h>


int N;

int main()
{
        N = Frama_C_interval(4, INT_MAX/4);

	int i;
	int sum[1];
	int *a = malloc(sizeof(int)*N);

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
	int res = sum[0];
	return 1;
}

