#include <cstdio>
#include <stdlib.h>
void hanoi(int n, int from, int to, int temp) 
{
    if (n == 1) 
    {
        printf("Disk 1 move from %d to %d\n", from, to);
        return;
    }
    hanoi(n - 1, from, temp, to);
    printf("Disk %d move from %d to %d\n", n, from, to);
    hanoi(n - 1, temp, to, from);
}
int main(int argc, char** argv)
{
    int n = 0;
    scanf_s("%d", &n);
    hanoi(n, 1, 2, 3);
	return 0;
}