#include <cstdio>
#include <stdlib.h>
int main(int argc, char** argv)
{
    int n = 0;
    scanf_s("%d", &n);
    int* arr = (int*)malloc(n * sizeof(int));
    for (int i = 0; i < n; i++)
    {
        scanf_s("%d", &arr[i]);
    }
    int a = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] * arr[i + 1] > 0)
        {
            a = 1;
            break;
        }
    }
    if (a == 1)
    {
        printf("YES");
    }
    else
    {
        printf("NO")
    }
	free(arr);
	return 0;
}