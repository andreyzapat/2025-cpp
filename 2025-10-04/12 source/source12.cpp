#include <cstdio>
int main(int argc, char** argv)
{
	long long a = 0;
	long long b = 0;
	scanf_s("%lld" "%lld", &a, &b);
	if (a > b)
	{
		printf("%lld", a);
	}
	else
	{
		printf("%lld", b);
	}
	return 0;
}