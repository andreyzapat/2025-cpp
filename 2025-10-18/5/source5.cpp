#include <cstdio>
int main(int argc, char** argv)
{
    int num;
    int max1 = 0, max2 = 0;
    while (1) 
    {
        scanf("%d", &num);
        if (num == 0)
        {
            break;
        }
        if (num > max1) 
        {
            max2 = max1;
            max1 = num;
        }
        else if (num > max2) 
        {
            max2 = num;
        }
    }
    printf("%d\n", max2);
    return 0;
}