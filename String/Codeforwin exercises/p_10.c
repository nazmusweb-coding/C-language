// Write a C program to count total number of words in a string.
#include <stdio.h>

void count_word (char string[])
{
    int word = 0;

    for (int i = 0; string[i]!='\0'; i++)
    {
        if (string[i]==' ' || string[i]=='\n' || string[i]=='\t')
        {
            word++;
        }
        
    }
    
    printf("Words: %d", word);
}

int main ()
{
    char string[100];

    printf("Enter the string: ");
    fgets(string, sizeof(string), stdin);

    count_word(string);


    return 0;
}