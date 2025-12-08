#include <cstdio>
#include <stdlib.h>
int main(int argc, char** argv)
{
    int a = 0;
    int b = 0;
    int c = 0;
    scanf_s("%d %d %d", &a, &b, &c);
    int first = 1;
    if (a != 0 || (a == 0 && b == 0 && c == 0)) 
    {
        if (!first && a > 0)
        {
            printf("+");
        }
        printf("%d", a);
        first = 0;
    }
    if (b != 0) 
    {
        if (!first) 
        {
            if (b > 0)
            {
                printf("+");
            }
        }
        if (abs(b) == 1)
        {
            if (b == -1)
            {
                printf("-");
            }
            printf("x");
        }
        else 
        {
            printf("%dx", b);
        }
        first = 0;
    }
    if (c != 0) 
    {
        if (!first) 
        {
            if (c > 0)
            {
                printf("+");
            }
        }
        if (abs(c) == 1) 
        {
            if (c == -1)
            {
                printf("-");
            }
            printf("y");
        }
        else 
        {
            printf("%dy", c);
        }
        first = 0;
    }
    printf("\n");
	return 0;
}