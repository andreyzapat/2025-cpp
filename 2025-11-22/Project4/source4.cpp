#include <stdio.h>
#include <string.h>
#include <stdbool.h>
bool Compare(char S1[], char S2[]) 
{
	return strcmp(S1, S2) == 0;
}
int main(char argc, char** argv)
{
    char S1[100];
    char S2[100];
    scanf_s("%s", S1, (unsigned)sizeof(S1));
    scanf_s("%s", S2, (unsigned)sizeof(S2));
    if (Compare(S1, S2)) 
    {
        printf("yes\n");
    }
    else 
    {
        printf("no\n");
    }
	return 0;
}