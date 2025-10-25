#include <cstdio>
int main(int argc, char** argv)
{
    int n;
    scanf("%d", &n);
    int current = 0, max = 0;
    for (int i = 0; i < n; i++) 
    {
        int temp;
        scanf("%d", &temp);
        if (temp > 0) 
        {
            current++;
            if (current > max) max = current;
        }
        else 
        {
            current = 0;
        }
    }
    printf("%d\n", max);
    return 0;
}