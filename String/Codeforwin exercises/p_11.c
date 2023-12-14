// Write a C program to find reverse of a string.
#include <stdio.h>

void rev (char string[], int length)
{
    char reversed_string[100];// here reversed string will be stored
    int i, j;

    for (i = length-2, j = 0; i >= 0; i--, j++)
    {
        reversed_string[j] = string[i];//assigning reversed values in reversed string
    }

    reversed_string[j] = '\0';//terminating the end of reversed string

    printf("Reversed: %s", reversed_string);
}

int main ()
{
    char ch, string[100];
    int index = 0;

    printf("Original: ");
    while (ch!='\n')
    {
        scanf("%c", &ch);
        string[index] = ch;
        index++;
    }
    
    string[index]='\0';//terminating the end of taken string

    rev(string, index);


    return 0; 
}