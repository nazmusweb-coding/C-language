// Write a C program to remove all repeated characters from a given string.
// important and effiecient code written by me till now (29/11/23, 1:20AM)
#include <stdio.h>

void remove_ch (char string[])
{
    int i, j, charFrequency[256] = {0};

    // this loop runs through the original(from the beginning) and updated(after overwriting) string
    for (i = 0; string[i]!='\n'; i++)
    {
        int ascii = (int)string[i];
        charFrequency[ascii]++;

        // if character frequency is found more than 1
        if (charFrequency[ascii]>1)
        {
            // this loop will replace or overwrite the duplicate character
            for (j = i; string[j]!='\n'; j++)
            {
                string[j] = string[j+1];
            }
            
            // if a character is removed then i will not increase
            i--;
        }
        
    }
    
    // terminates the end of updated string
    string[i] = '\0';

    printf("String after removing duplicates: %s", string);
}

int main ()
{
    char string[100];

    printf("Input String: ");
    fgets(string, sizeof(string), stdin);

    remove_ch(string);
    

    return 0;
}