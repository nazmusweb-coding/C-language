//this code is efficient as per chatgpt :)
#include <stdio.h>

void reverse_order (char string[])
{
    char reverse[100];
    int len, wordStart, wordEnd, index, i;

    for (len = 0; string[len]!='\n'; len++);

    index = 0;
    wordStart = len - 1;
    wordEnd   = len - 1;

    while(wordStart > 0)
    {
        // If a word is found
        if(string[wordStart] == ' ')
        {
            // Add the word to the reverse string
            i = wordStart + 1;

            while(i <= wordEnd)
            {
                reverse[index] = string[i];

                i++;
                index++;
            }
            reverse[index++] = ' ';

            // Gets rid of lastly assigned word
            wordEnd = wordStart - 1;
        }

        wordStart--;
    }

    // Finally add the last word
    for(i=0; i<=wordEnd; i++)
    {
        reverse[index] = string[i];
        index++;
    }

    // Add NULL character at the end of reverse string
    reverse[index] = '\0'; 

    printf("Original string: %s\n\n", string);
    printf("Reverse ordered words: %s", reverse);
}

int main ()
{
    char string[100];

    fgets(string, sizeof(string), stdin);

    reverse_order(string);


    return 0;
}