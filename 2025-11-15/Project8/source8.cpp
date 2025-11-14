#include <cstdio>
#include <stdlib.h>
int binomial(int n, int k) 
{
    if (k == 0 || k == n) 
    {
        return 1;
    }
    return binomial(n - 1, k - 1) + binomial(n - 1, k);
}
int main(int argc, char** argv)
{
    int n = 0;
    int k = 0;
    scanf_s("%d %d", &n, &k);
    int result = binomial(n, k);
    printf("%d\n", result);
	return 0;
}