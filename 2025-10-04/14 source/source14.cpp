#include <cstdio>
int main(int argc, char** argv)
{
	long long int a = 0;
	scanf_s("%lld", &a);
	printf("%lld", ((a / 10) * ((a / 10) + 1)) * 100 + 25);
	return 0;
}