#include <cstdio>
#include <cmath>
int main(int argc, char** argv)
{
	int a = 0;
	int b = 0;
	int c = 0;
	scanf_s("%d" "%d" "%d", &a, &b, &c);
	double int d = b * b - 4 * a * c;
	if (a == 0 and b == 0)
	{
		printf("%d", -1);
	}
	else if (a == 0)
	{
		printf("%d", -c / b);
	}
	else if (d == 0)
	{
		printf("%d", -b / (2 * a));
	}
	else
	{
		printf("%d", (-b + sqrt(d)) / (2 * a));
		printf("\n", "%d", (-b - sqrt(d)) / (2 * a));
	}
	return 0;
}