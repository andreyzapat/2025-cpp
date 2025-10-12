#include <cstdio>
int main(int argc, char** argv)
{
	int a = 0;
	int b = 0;
	scanf_s("%d" "%d", &a, &b);
	int c = a % b;
	int d = b % a;
	if (c == 0 or d == 0)
	{
		printf("%d", 1);
	}
	else
	{
		printf("%d", 666);
	}
	return 0;
}