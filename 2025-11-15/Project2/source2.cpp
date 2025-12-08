#include <cstdio>
#include <stdlib.h>
double power(double a, int n) 
{
    double result = 1.0;
    for (int i = 0; i < n; i++) 
    {
        result *= a;
    }
    return result;
}
int main(int argc, char** argv)
{
    double a = 0;
    int n = 0;
    scanf_s("%lf %d", &a, &n);
    double result = power(a, n);
    printf("%.6lf\n", result);
    return 0;
}