#include <cstdio>
int main(int argc, char** argv)
{
    int a1 = 0;
    int b1 = 0;
    int c1 = 0;
    int a2 = 0;
    int b2 = 0;
    int c2 = 0;
    scanf_s("%d %d %d", &a1, &b1, &c1);
    scanf_s("%d %d %d", &a2, &b2, &c2);
    if (a1 > b1) 
    {
        int temp = a1; a1 = b1; b1 = temp; 
    }
    if (b1 > c1) 
    { 
        int temp = b1; b1 = c1; c1 = temp; 
    }
    if (a1 > b1) 
    {
        int temp = a1; a1 = b1; b1 = temp; 
    }
    if (a2 > b2) 
    { 
        int temp = a2; a2 = b2; b2 = temp;
    }
    if (b2 > c2) 
    {
        int temp = b2; b2 = c2; c2 = temp; 
    }
    if (a2 > b2)
    {
        int temp = a2; a2 = b2; b2 = temp;
    }
    if (a1 == a2 && b1 == b2 && c1 == c2) 
    {
        printf("Boxes are equal\n");
    }
    else if (a1 <= a2 && b1 <= b2 && c1 <= c2)
    {
        printf("The first box is smaller than the second one\n");
    }
    else if (a1 >= a2 && b1 >= b2 && c1 >= c2) 
    {
        printf("The first box is larger than the second one\n");
    }
    else
    {
        printf("Boxes are incomparable\n");
    }
	return 0;
}