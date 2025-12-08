#include <cstdio>
int main(int argc, char** argv)
{
	int n = 0;
	scanf_s("%d", &n);
	int arr[1000];
	int max = -1001;
	int min = 1001;
	for (int i = 0; i < n; i++)
	{
		scanf_s("%d", &arr[i]);
		if (arr[i] < min)
		{
			min = arr[i];
		}
		if (arr[i] > max)
		{
			max = arr[i];
		}
	}
	for (int i = 0; i < n; i++)
	{
		if (arr[i] == max)
		{
			arr[i] = min;
		}
	}
	for (int i = 0; i < n; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}