#include <stdio.h>
#include <string.h>
bool isPalindrome(char str[])
{
    int left = 0;
    int right = strlen(str) - 1;
    while (left < right) 
    {
        if (str[left] != str[right])
        {
            return false;
        }
        left++;
        right--;
    }
    return true;
}
int main(int argc, char** argv)
{
    char str[1000];
    scanf_s("%s", str, (unsigned)sizeof(str));
    if (isPalindrome(str)) 
    {
        printf("yes\n");
    }
    else 
    {
        printf("no\n");
    }
	return 0;
}