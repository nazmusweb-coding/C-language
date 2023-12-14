// Write a C program to reverse order of words in a given string.
#include <stdio.h>

void reverse (char string[])
{
    int len, i, j, k=0, space = 0;
    char reverse_order[100];
    
    for (len = 0; string[len]!='\n'; len++);

    for (i = len-1; i>=0; i--)
    {
        if (string[i]==' ')
        {
            space++;// for last word
            for (j = i+1; (space==1)? j!=len : string[j]!=' '; j++, k++)//i know this is little bit complex
            {
                reverse_order[k] = string[j];
            }

            //manually adding space after every word
            reverse_order[k++] = ' ';
        }
        else if (i==0)// for first word
        {
            for (j = i; string[j]!=' '; j++, k++)
            {
                reverse_order[k] = string[j];
            }
            
        }

    }
    
    reverse_order[k] = '\0';

    printf("%s", reverse_order);
}

int main ()
{
    char string[100];

    fgets(string, sizeof(string), stdin);

    reverse(string);


    return 0;
}