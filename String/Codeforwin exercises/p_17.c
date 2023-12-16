// Write a C program to count occurrences of a character in given string.
#include <stdio.h>

void count (char string[], char ch)
{
    int occurrence = 0;
    for (int i = 0; string[i]!='\n'; i++)
    {
        if (string[i]==ch)
        {
            occurrence++;
        }
        
    }
    
    printf("Total occurrences of '%c' : %d", ch, occurrence);
}

int main ()
{
    char ch, string[100];

    printf("Input String: ");
    fgets(string, sizeof(string), stdin);
    printf("Input Character to search: ");
    scanf("%c", &ch);

    count(string, ch);


    return 0;
}