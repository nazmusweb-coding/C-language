// Write a C program to replace all occurrences of a character with another in a string.
#include <stdio.h>

void replace_ch (char string[], char replace, char replace_with)
{
    for (int i = 0; string[i]!='\n'; i++)
    {
        if (string[i]==replace)
        {
            string[i] = replace_with;
        }
        
    }
    
    printf("String after replacing '%c' with '%c': %s", replace, replace_with, string);
}

int main ()
{
    char replace, replace_with, string[100];

    printf("Input string: ");
    fgets(string, sizeof(string), stdin);
    printf("Input character to replace: ");
    scanf("%c", &replace);
    printf("Input character to replace with: ");
    scanf(" %c", &replace_with);// there is a next line in buffer, so I used ' ' a space to get it eaten

    replace_ch(string, replace, replace_with);


    return 0;
}