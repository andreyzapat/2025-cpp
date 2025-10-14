#include <cstdio>
int main(int argc, char** argv)
{
	int a = 0;
	int b = 0;
	int c = 0;
	int d = 0;
	scanf_s("%d%d%d%d", &a, &b, &c, &d);
	if (a != c)
	{
		printf("NO");
	}
	else if (b == 2)
	{
		if (d == 3 or d == 4)
		{
			printf("YES");
		}
		else
		{
			printf("NO");
		}
	}
	else if (b == 8)
	{
		printf("NO");
	}
	else 
	{
		if (d == b + 1)
		{
			printf("YES");
		}
		else
		{
			printf("NO");
		}
	}
	return 0;
}