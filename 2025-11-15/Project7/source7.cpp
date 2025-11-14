#include <cstdio>
#include <stdlib.h>
int phi(int n) 
{
    if (n == 0 || n == 1) 
    {
        return 1;
    }
    return phi(n - 1) + phi(n - 2);
}
int main(int argc, char** argv)
{
    int n;
    scanf_s("%d", &n);
    int result = phi(n);
    printf("%d\n", result);
	return 0;
}