#include <cstdio>
int main(int argc, char** argv)
{
	int a = 0;
	scanf_s("%d", &a);
	printf("The next number for the number ");
	printf("%d", a);
	printf(" is ");
	printf("%d", a + 1);
	printf(".\n");
	printf("The previous number for the number ");
	printf("%d", a);
	printf(" is ");
	printf("%d", a - 1);
	printf(".");
	return 0;
}