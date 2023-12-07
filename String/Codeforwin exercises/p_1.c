// Write a C program to find length of a string.
// without using strlen()
#include <stdio.h>
void len (char string[])
{
    int i = 0;
    while (string[i]!='\0')
    {
        i++;
    }
    printf("Lenth of the following string : %d", i-1);
}

int main ()
{
    char string[100];
    fgets(string, sizeof(string), stdin);

    len(string);


    return 0;
}