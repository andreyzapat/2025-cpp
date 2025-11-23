#include <stdio.h>
#include <string.h>
int main(char argc, char** argv)
{
    char str[1000];
    scanf_s("%s", str, (unsigned)sizeof(str));
    int count[256] = { 0 };
    for (int i = 0; str[i] != '\0'; i++) 
    {
        count[(unsigned char)str[i]]++;
    }
    for (int i = 0; i < 256; i++) 
    {
        if (count[i] == 2)
        {
            printf("%c\n", (char)i);
            break;
        }
    }
	return 0;
}