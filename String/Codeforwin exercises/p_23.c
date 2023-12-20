// Write a C program to remove all occurrences of a character from string.
// important
#include <stdio.h>

void remove_ch (char string[], char ch)
{
    int i;
    int index[100];
    
    for (i = 0; string[i]!='\n'; i++)
    {
        if (string[i]==ch)
        {
            for (int j = i; string[j]!='\n'; j++)
            {
                string[j] = string[j+1];
            }

            // If a character is removed then make sure i doesn't increments
            i--;//this line is so important that it helps to keep index counting with updated overwritten string, like aammaa
        }

    }

    string[i] = '\0';

    printf("String after removing all '%c' : %s", ch, string);
}

int main ()
{
    char ch, string[100];

    printf("Input String: ");
    fgets(string, sizeof(string), stdin);
    printf("Input character to remove: ");
    scanf("%c", &ch);

    remove_ch(string, ch);
    

    return 0;
}