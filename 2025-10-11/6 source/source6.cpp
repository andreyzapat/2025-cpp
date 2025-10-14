#include <cstdio>
#include <cmath>
int main(int argc, char** argv)
{
	float a = 0;
	float b = 0;
	float c = 0;
	scanf_s("%f" "%f" "%f", &a, &b, &c);
	float d = b * b - (4 * a * c);
	if (a == 0 and b == 0 and c == 0)
	{
		printf("%d", -1);
	}
	else if (a == 0)
	{
		printf("%d", 1);
		printf("\n");
		printf("%f", -c / b);
	}
	else if (d == 0)
	{
		printf("%d", 1);
		printf("\n");
		printf("%f", -b / (2 * a));
	}
	else if (d > 0)
	{
		printf("%d", 2);
		printf("\n");
		printf("%f", (-b - sqrt(d)) / (2 * a));
		printf("\n");
		printf("%f", (-b + sqrt(d)) / (2 * a));
	}
	else if (d < 0)
	{
		printf("%d", 0);
	}
	return 0;
}