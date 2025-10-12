#include <cstdio>
int main(int argc, char** argv)
{
	int a = 0;
	scanf_s("%d", &a);
	int b = ((a / 1000) % 10) + ((a / 1000) / 100) + (((a / 1000) / 10) % 10);
	int c = ((a % 1000) % 10) + ((a % 1000) / 100) + (((a % 1000) / 10) % 10);

	if (b == c) {
		printf("YES");
	}
	else {
		printf("NO");
	}
	return 0;
}