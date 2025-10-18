#include <cstdio>
int main(int argc, char** argv)
{
    int n = 0;
    int a = 0;
    int b = 1;
    int i = 1;
    scanf("%d", &n);
    while (i++ <= n)
    {
        b = a + b;
        a = b - a;
    }
    printf("%d\n", n == 0 ? 0 : a);
    return 0;
}