#include <cstdio>
int main(int argc, char** argv)
{
	long long int a = 0;
	long long int b = 0;
	scanf_s("%lld" "%lld", &a, &b);
	printf("%lld", b / a);
	printf(" ");
	printf("%lld", b % a);
	printf(" ");
	if (b % a == 0)
	{
		printf("%d", 0);
	} 
	else 
	{
		printf("%lld", a - (b % a));
	}
	return 0;
}