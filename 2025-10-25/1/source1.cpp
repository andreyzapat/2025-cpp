#include <cstdio>
int main(int argc, char** argv)
{
    int n = 0;
    int x = 0;
    int num = 0;
    int count = 0;
    scanf("%d", &n);
    int arr[1000];
    for (int i = 0; i < n; i++) 
    {
        scanf("%d", &arr[i]);
    }
    scanf("%d", &x);
    for (int i = 0; i < n; i++) 
    {
        if (arr[i] == x) 
        {
            count++;
        }
    }
    printf("%d\n", count);
    return 0;
}