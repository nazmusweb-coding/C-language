// Write a C program to find last occurrence of a character in a given string.
#include <stdio.h>

int find (char *string, char ch)
{
    int i, len;
    
    // counts length of the string
    for (len = 0; string[len]!='\n'; len++);

    for (i = len-1; i >= 0; i--)
    {
        if (string[i]==ch)
        {
            // if searching character is found 
            return i;
        }
        
    }
    
    // if searching character is not found
    return -1;
}

int main ()
{
    char ch, string[100];

    printf("Input String: ");
    fgets(string, sizeof(string), stdin);
    printf("Input Character to search: ");
    scanf("%c", &ch);

    int value = find(string, ch);

    if (value==-1)
    {
        printf("Not found");
    }
    else
    {
        printf("Character '%c' is found at index %d", ch, value);
    }
    

    return 0;
}