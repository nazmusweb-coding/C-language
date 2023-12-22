// Write a C program to replace last occurrence of a character with another in a string.
#include <stdio.h>

void replace_ch (char string[], char replace, char replace_with)
{
    int len;
    for (len = 0; string[len]!='\n'; len++);
    
    for (len = len-1; len>=0; len--)
    {
        if (string[len]==replace)
        {
            string[len] = (char)replace_with;
            break;
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