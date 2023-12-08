// Write a C program to copy one string to another string.
// without using strcpy()
#include <stdio.h>
void cpy (char *copy_to, char *copy_from)
{
    int i = 0;
    while (copy_from[i]!='\0')
    {
        copy_to[i] = copy_from[i];
        i++;
    }
    
    copy_to[i] = '\0';

    printf("Copied string: %s", copy_to);
}

int main ()
{
    char string[100], string1[100];

    printf("Enter the first string: ");
    fgets(string, sizeof(string), stdin);
    printf("Enter the second string: ");
    fgets(string1, sizeof(string1), stdin);

    cpy(string, string1);


    return 0;
}