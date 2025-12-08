#include <stdio.h>
#include <string.h>
int main(int argc, char** argv)
{
    char str[1000];
    fgets(str, sizeof(str), stdin);
    int wordCount = 0;
    int inWord = 0; 
    for (int i = 0; str[i] != '\0'; i++) 
    {
        if (str[i] != ' ' && str[i] != '\n' && str[i] != '\r') 
        {
            if (!inWord) 
            {
                wordCount++;
                inWord = 1;
            }
        }
        else 
        {
            inWord = 0;
        }
    }
    printf("%d\n", wordCount);
	return 0;
}