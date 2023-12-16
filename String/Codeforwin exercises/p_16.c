// Write a C program to search all occurrences of a character in given string.
#include <stdio.h>

void find (char string[], char ch)
{
    printf("Occurrence :");
    for (int i = 0; string[i]!='\n'; i++)
    {
        if (string[i]==ch)
        {
            printf(" %d", i);
        }
        
    }
    
}

int main ()
{
    char ch, string[100];

    printf("Input String: ");
    fgets(string, sizeof(string), stdin);
    printf("Input Character to search: ");
    scanf("%c", &ch);

    find(string, ch);


    return 0;
}