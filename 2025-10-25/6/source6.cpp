#include <cstdio>
int main(int argc, char** argv)
{
	int n = 0;
	scanf_s("%d", &n);
	int arr[1000];
	for (int i = 0; i < n; i++)
	{
		arr[i] = i + 1;
	}
	int a = 0;
	int b = 0;
	scanf_s("%d %d", &a, &b);
	for (int i = a - 1, 
		j = b - 1; i < j; i++, j--)
	{
		int e = arr[i];
		arr[i] = arr[j];
		arr[j] = e;
	}
	int c = 0;
	int d = 0;
	scanf_s("%d %d", &c, &d);
	for (int i = c - 1, j = d - 1; i < j; i++, j--)
	{
		int e = arr[i];
		arr[i] = arr[j];
		arr[j] = e;
	}
	for (int i = 0; i < n; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}