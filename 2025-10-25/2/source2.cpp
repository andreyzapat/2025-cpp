#include <cstdio>
int main(int argc, char** argv)
{
    int n = 0;
    scanf_s("%d", &n);
    int arr[1000];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int l = 0;
    int r = 0;
    scanf_s("%d %d", &l, &r);
    l--;
    r--;
    int max_value = arr[l];
    int max_index = l;
    for (int i = l + 1; i <= r; i++)
    {
        if (arr[i] > max_value)
        {
            max_value = arr[i];
            max_index = i;
        }
    }
    printf("%d %d\n", max_value, max_index + 1);
	return 0;
}