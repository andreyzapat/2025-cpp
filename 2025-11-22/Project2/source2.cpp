#include <stdio.h>
#include <string.h>
unsigned char ToUpper(unsigned char c) 
{
    char lowercase[] = "abcdefghijklmnopqrstuvwxyz";
    char uppercase[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    char* position = strchr(lowercase, c);
    if (position != NULL) 
    {
        int index = position - lowercase;
        return uppercase[index];
    }
    return c;
}
int main(int argc, char** argv)
{
    unsigned char c;
    scanf_s("%c", &c);
    unsigned char result = ToUpper(c);
    printf("%c\n", result);
	return 0;
}