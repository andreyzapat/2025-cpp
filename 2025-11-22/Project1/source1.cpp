#include <stdio.h>
#include <string.h>
#include <stdbool.h>
bool IsDigit(unsigned char c)
{
    char digits[] = "0123456789";
    return (strchr(digits, c) != NULL);
}
int main(char argc, char** argv) 
{
    unsigned char c;
    scanf_s("%c", &c);
    if (IsDigit(c)) 
    {
        printf("yes\n");
    }
    else 
    {
        printf("no\n");
    }
    return 0;
}