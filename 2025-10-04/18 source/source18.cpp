#include <cstdio>
int main(int argc, char** argv)
{
	int a = 0;
	scanf_s("%d", &a);
	printf("%d", ((a - 1) / 10) + 1);
	return 0;
}