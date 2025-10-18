#include <cstdio>
int main(int argc, char** argv)
{
    int a = 0;
    int b = 0;
    int c = 0;
    int d = 0;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    for (int x = -100; x <= 100; x++) 
    {
        long long value = ((long long)a * x + b) * x + c;
        value = value * x + d;
        if (value == 0) 
        {
            printf("%d ", x);
        }
    }
    printf("\n");
    return 0;
}