// Write a C program to find first occurrence of a word in a given string.
#include <stdio.h>
const int size = 100;

void find (char string[], char word[])
{
    int len, i, j = 0;

    for (len = 0; word[len]!='\n'; len++);

    word[len] = '\0';// replaced the newline with null character

    for (i = 0; string[i]!='\n'; i++)
    {
        if (string[i]==word[j])
        {
            if (len-1==j)
            {
                break;
            }
            else
            {
                j++;
            }
        }
        else
        {
            j = 0;
        }
        
    }
    
    if (j==len-1)
    {
        printf("'%s' is found at index %d", word, i-len+1);
    }
    else
    {
        printf("Not found");
    }
}

int main ()
{
    char string[size], word[size];

    printf("Input string: ");
    fgets(string, sizeof(string), stdin);
    printf("Input word to search: ");
    fgets(word, sizeof(word), stdin);

    find(string, word);


    return 0;
}