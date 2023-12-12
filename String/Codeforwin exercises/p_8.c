// Write a C program to find total number of alphabets, digits or special character in a string.
#include <stdio.h>

void find (char string[])
{
    int alphabet = 0, digit = 0, special = 0;
    for (int i = 0; string[i]!='\n'; i++)
    {
        if ((string[i]>='A' && string[i]<='Z') || (string[i]>='a' && string[i]<='z'))
        {
            alphabet++;
        }
        else if (string[i]>='0' && string[i]<='9')
        {
            digit++;
        }
        else
        {
            special++;
        }
    }
    
    printf("Alphabets: %d\nDigits: %d\nSpecial Character: %d\n", alphabet, digit, special);
}

int main ()
{
    char string[100];

    printf("Enter the string: ");
    fgets(string, sizeof(string), stdin);

    find(string);


    return 0;
}