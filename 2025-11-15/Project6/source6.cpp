#include <cstdio>
#include <stdlib.h>
double fastPower(double a, unsigned int n) 
{
    double result = 1.0;
    while (n > 0) 
    {
        if (n % 2 == 1) 
        {
            result *= a;
        }
        a *= a;
        n /= 2;
    }
    return result;
}
int main(int argc, char** argv)
{
    double a = 0;
    unsigned int n = 0;
    scanf_s("%lf %u", &a, &n);
    double result = fastPower(a, n);
    printf("%.6lf\n", result);
	return 0;
}