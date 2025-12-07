#include <cstdio>
#include <stdlib.h>
double power(double a, int N)
{
	double result = 1.0;
	for (int i = 0; i < N; i++)
	{
		result *= a;
	}
	return result;
}