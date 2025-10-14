#include <cstdio>
int main(int argc, char** argv)
{
    int a = 0;
    int b = 0;
    scanf_s("%d" "%d", &a, &b);
    printf("%d", (b / a) + 1);
    printf(" ");
    printf("%d", b - ((b / a) * a));
    return 0;
}