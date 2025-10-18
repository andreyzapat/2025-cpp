#include <cstdio>
int main(int argc, char** argv)
{
	double x = 0;
	double y = 0;
	scanf_s("%lf %lf", &x, &y);
	if (x >= y)
	{
		printf("1");
		return 0;
	}
	int a = 0;
	while (x < y)
	{
		x += x * 0.15;
		a++;
	}
	printf("%d", a + 1);
	return 0;
}