#include <cstdio>
int main(int argc, char** argv)
{
    int a = 0;
    int b = 0;
    scanf("%d %d", &a, &b);
    int x = a;
    int y = b;
    while (y != 0) 
    {
        int temp = y;
        y = x % y;
        x = temp;
    }
    int gcd = x;
    long long lcm = (long long)a / gcd * b;
    printf("%lld\n", lcm);
    return 0;
}