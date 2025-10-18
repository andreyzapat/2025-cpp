#include <cstdio>
int main(int argc, char** argv)
{
	int a = 0;
	int b = 0;
	int c = 0;
	scanf_s("%d" "%d" "%d", &a, &b, &c);
	char itog[200];
	char str[100];
	if (a == 0)
	{
		printf("");
	}
	else
	{
		printf("%d", a);
	}
	if (b == 0)
	{
		printf("");
	}
	else if (b == 1)
	{
		printf("+x");
	}
	else if (b == -1)
	{
		printf("-x");
		printf("x");
	}
	else if (b > 0)
	{
		printf("+");
		printf("%d", b);
		printf("x");
	}
	else
	{
		printf("%d", b);
		printf("x");
	}
	if (c == 0)
	{
		printf("");
	}
	else if (c == 1)
	{
		printf("+");
		printf("y");
	}
	else if (c == -1)
	{
		printf("-");
		printf("y");
	}
	else if (c > 0)
	{
		printf("+");
		printf("%d", c);
		printf("y");
	}
	else
	{
		printf("%d", c);
		printf("y");
	}
	return 0;
}