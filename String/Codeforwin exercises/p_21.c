// Write a C program to remove first occurrence of a character from string.
// important
#include <stdio.h>

void first_occurrence (char string[], char ch)
{
    int i, len;

    //counts length of string
    for (len = 0; string[len]!='\n'; len++);
    
    //finds first occurrence of the ch
    for (i = 0; i < len; i++)
    {
        if (string[i]==ch)
        {
            break;
        }
        
    }

    //replaces previous character with next character
    while (i<len)
    {
        string[i] = string[++i];
    }

    //terminate the end of the string
    string[i] = '\0';
    
    printf("String after removing first '%c' :%s", ch, string);
}

int main ()
{
    char ch, string[100];

    printf("Input String: ");
    fgets(string, sizeof(string), stdin);
    printf("Input character to remove: ");
    scanf("%c", &ch);

    first_occurrence(string, ch);
    

    return 0;
}