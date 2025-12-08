#include <cstdio>
int main(int argc, char** argv)
{
	long long int a = 0;
	long long int b = 0;
	long long int c = 0;
	scanf_s("%lld" "%lld" "%lld", &a, &b, &c);
	printf("%lld", a + b + c);
	return 0;
}