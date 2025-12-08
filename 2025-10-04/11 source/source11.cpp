#include <cstdio>
int main(int argc, char** argv)
{
	long long int a = 0;
	scanf_s("%lld", &a);
	printf("%lld", ((a + 1) / 2) * ((a + 1) / 2));
	return 0;
}