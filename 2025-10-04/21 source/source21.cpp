#include <cstdio>
int main(int argc, char** argv)
{
	int a = 0;
	int b = 0;
	scanf_s("%d" "%d", &a, &b);
	int c = a * b;
	int d = (c % 109 + 109) % 109;
	printf("%d", d + 1);
	return 0;
}