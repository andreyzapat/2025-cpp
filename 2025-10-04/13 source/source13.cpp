#include <cstdio>
int main(int argc, char** argv)
{
    int a = 0;
    int n = 0;
    scanf_s("%d" "%d", &a, &n);
    printf("%d", (n / a) + 1);
    printf(" ");
    printf("%d", n - ((n / a) * a));
    return 0;
}