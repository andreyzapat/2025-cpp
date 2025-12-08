#include <stdio.h>
#include <string.h>
int main(int argc, char** argv)
{
    char sentence[1000];
    fgets(sentence, sizeof(sentence), stdin);
    sentence[strcspn(sentence, "\n")] = 0;
    char* longest_word = NULL;
    int max_length = 0;
    char* current_word = NULL;
    current_word = strtok(sentence, " ");
    while (current_word != NULL) 
    {
        int current_length = strlen(current_word);
        if (current_length > max_length) 
        {
            max_length = current_length;
            longest_word = current_word;
        }
        current_word = strtok(NULL, " ");
    }
    if (longest_word != NULL) 
    {
        printf("%s\n", longest_word);
        printf("%d\n", max_length);
    }
	return 0;
}