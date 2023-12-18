// Write a C program to find highest frequency character in a string.
// important
// most effiecient code i have ever written
#include <stdio.h>

void highest (char string[])
{
    int frequency[256] = {0}; //array to store frequencies for ASCII characters
    int maxFrequency = 0;
    char maxChar;

    for (int i = 0; string[i]!='\n'; i++)
    {
        int ascii = (int)string[i];
        frequency[ascii]++;
        if (frequency[ascii]>=maxFrequency)
        {
            maxFrequency = frequency[ascii];
            maxChar = string[i];
        }
        
    }
    if (maxFrequency>1)
        printf("Highest frequency character is '%c', frequency %d", maxChar, maxFrequency);
    else
        printf("Not found");
}

int main ()
{
    char ch, string[100];

    printf("Input String: ");
    fgets(string, sizeof(string), stdin);

    highest(string);


    return 0;
}