// Write a C program to find lowest frequency character in a string.
// important
#include <stdio.h>

void lowest (char string[])
{
    int frequency[256] = {0};//array to store frequencies for ASCII characters
    int miniFrequency = 101;
    char miniChar;

    for (int i = 0; string[i]!='\n'; i++)
    {
        int ascii = (int)string[i];
        frequency[ascii]++;

        if (frequency[ascii]<=miniFrequency)
        {
            miniFrequency = frequency[ascii];
            miniChar = string[i];
        }
        
    }

    printf("Lowest frequency character is '%c', frequency %d", miniChar, miniFrequency);
}

int main ()
{
    char ch, string[100];

    printf("Input String: ");
    fgets(string, sizeof(string), stdin);

    lowest(string);


    return 0;
}