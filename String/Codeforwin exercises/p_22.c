// Write a C program to remove last occurrence of a character from string.
#include <stdio.h>

void last_occurrence (char string[], char ch)
{
    int len;

    //counts the length of the string
    for (len = 0; string[len]!='\n'; len++);

    //finds the last occurrence of the ch
    while (len>=0)
    {
        if (string[len]==ch)
        {
            break;
        }
        len--;
    }

    while (string[len]!='\n')
    {
        printf("hello\n");
        string[len] = string[++len];
    }

    string[len] = '\0';

    printf("String after removing last '%c' :%s", ch, string);
}

int main ()
{
    char ch, string[100];

    printf("Input String: ");
    fgets(string, sizeof(string), stdin);
    printf("Input character to remove: ");
    scanf("%c", &ch);

    last_occurrence(string, ch);


    return 0;
}
