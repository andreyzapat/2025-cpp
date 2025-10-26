#include <cstdio>
#include <stdlib.h>
#include <math.h>
int main(int argc, char** argv)
{
    int a = 0;
    int b = 0;
    int c = 0;
    scanf("%d %d %d", &a, &b, &c);
    if (a == 0 && b == 0 && c == 0)
    {
        printf("-1\n");
        return 0;
    }
    if (a == 0) 
    {
        if (b == 0) 
        {
            printf("0\n");
        }
        else 
        {
            double root = -c / (double)b;
            printf("1\n%.5lf\n", root);
        }
        return 0;
    }
    int discriminant = b * b - 4 * a * c;
    if (discriminant < 0) 
    {
        printf("0\n");
    }
    else if (discriminant == 0) 
    {
        double root = -b / (2.0 * a);
        printf("1\n%.5lf\n", root);
    }
    else 
    {
        double sqrt_d = sqrt(discriminant);
        double root1 = (-b - sqrt_d) / (2.0 * a);
        double root2 = (-b + sqrt_d) / (2.0 * a);
        if (root1 < root2)
        {
            printf("2\n%.5lf\n%.5lf\n", root1, root2);
        }
        else
        {
            printf("2\n%.5lf\n%.5lf\n", root2, root1);
        }
    }
	return 0;
}