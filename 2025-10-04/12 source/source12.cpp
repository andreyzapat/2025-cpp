#include <cstdio>
int main(int argc, char** argv)
{
    long long n = 0;
    long long m = 0;
    scanf_s("%lld %lld", &n, &m);
    long long ans = n * m - n - m + 2;
    if (ans < 1)
    {
        ans = 1;
    }
    printf("%lld\n", ans);
    return 0;
}