#include <cstdio>
#include <stdlib.h>
int Prime(long long n)
{
    for (long long i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            return 0;
        }
    }
    return 1;
}
int main(int argc, char** argv)
{
    long long n;
    scanf_s("%lld", &n);
    if (Prime(n))
    {
        printf("prime\n");
    }
    else
    {
        printf("composite\n");
    }
	return 0;
}