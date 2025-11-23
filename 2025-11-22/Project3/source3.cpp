#include <stdio.h>
#include <string.h>
unsigned char ChangeCase(unsigned char c) 
{
    char lowercase[] = "abcdefghijklmnopqrstuvwxyz";
    char uppercase[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    char* lower_pos = strchr(lowercase, c);
    if (lower_pos != NULL) 
    {
        int index = lower_pos - lowercase;
        return uppercase[index];
    }
    char* upper_pos = strchr(uppercase, c);
    if (upper_pos != NULL) 
    {
        int index = upper_pos - uppercase;
        return lowercase[index];
    }
    return c;
}
int main(char argc, char** argv)
{
    unsigned char c;
    scanf_s("%c", &c);
    unsigned char result = ChangeCase(c);
    printf("%c\n", result);
	return 0;
}