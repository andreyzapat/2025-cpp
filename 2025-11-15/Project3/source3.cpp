#include <cstdio>
#include <stdlib.h>
bool Election(bool x, bool y, bool z) 
{
    int count = (x ? 1 : 0) + (y ? 1 : 0) + (z ? 1 : 0);
    return (count >= 2);
}
int main(int argc, char** argv)
{
    int x = 0;
    int y = 0;
    int z = 0;
    scanf_s("%d %d %d", &x, &y, &z);
    bool result = Election(x, y, z);
    printf("%d\n", result);
	return 0;
}