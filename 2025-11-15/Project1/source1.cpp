#include <cstdio>
#include <stdlib.h>
int min(int a, int b, int c, int d)
{
    int min_val = a;
    if (b < min_val) min_val = b;
    if (c < min_val) min_val = c;
    if (d < min_val) min_val = d;
    return min_val;
}
int main(int argc, char** argv)
{
    int a = 0;
    int b = 0;
    int c = 0;
    int d = 0;
    scanf_s("%d %d %d %d", &a, &b, &c, &d);
    int result = min(a, b, c, d);
    printf("%d\n", result);
    return 0;
}