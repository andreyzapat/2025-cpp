#include <cstdio>
int main(int argc, char** argv)
{
    int num = 1;
    int prev = 1;
    int count = 1;
    int max_count = 1;
    scanf("%d", &prev);
    do 
    {
        scanf("%d", &num);
        if (num == prev) 
        {
            count++;
            if (count > max_count) 
            {
                max_count = count;
            }
        }
        else 
        {
            count = 1;
            prev = num;
        }
    } while (num != 0);
    printf("%d\n", max_count);
    return 0;
}