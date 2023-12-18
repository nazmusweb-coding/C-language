// Write a C program to count frequency of each character in a string.
// important
#include <stdio.h>

void count (char string[], int frequency[])
{
    for (int i = 0; string[i]!='\n'; i++)
    {
        int ascii = (int)string[i];
        frequency[ascii]++;
    }

}

void printInfo (int frequency[])
{
    for (int i = 0; i<256; i++)
    {
        if (frequency[i]!=0)
        {
            printf("'%c' = %d\n", (char)i, frequency[i]);
        }
        
    }
    
}

int main ()
{
    char string[100];
    int frequency[256] = {0};

    printf("Input String: ");
    fgets(string, sizeof(string), stdin);

    count(string, frequency);
    printInfo(frequency);
    

    return 0;
}

