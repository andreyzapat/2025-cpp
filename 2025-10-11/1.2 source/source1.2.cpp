#include <cstdio>
#include <stdlib.h>
int main(int argc, char** argv)
{
    int x1 = 0;
    int y1 = 0;
    int x2 = 0;
    int y2 = 0;
    scanf_s("%d %d", &x1, &y1);
    scanf_s("%d %d", &x2, &y2);
    int dx = abs(x2 - x1);
    int dy = abs(y2 - y1);
    if ((dx == 2 && dy == 1) || (dx == 1 && dy == 2)) 
    {
        printf("YES\n");
    }
    else 
    {
        printf("NO\n");
    }
	return 0;
}