#include <cstdio>
#include <stdlib.h>
int main(int argc, char** argv)
{
    int n;
    scanf_s("%d", &n);
    int arr[1000];
    for (int i = 0; i < n; i++) 
    {
        scanf_s("%d", &arr[i]);
    }
    int x;
    scanf_s("%d", &x);
    int closest = arr[0];
    int min_diff = abs(arr[0] - x);
    for (int i = 1; i < n; i++) 
    {
        int diff = abs(arr[i] - x);
        if (diff < min_diff) 
        {
            min_diff = diff;
            closest = arr[i];
        }
        else if (diff == min_diff) 
        {
            if (arr[i] < closest)
            {
                closest = arr[i];
            }
        }
    }
    printf("%d\n", closest);
	return 0;
}