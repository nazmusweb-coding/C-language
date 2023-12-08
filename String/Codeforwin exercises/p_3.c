// Write a C program to concatenate two strings.
// without using strcat()
#include <stdio.h>
void cat (char first_string[], char second_string[])
{
    int i = 0;

    // we are taking user input so '\n', otherwise i would have used '\0'
    while (first_string[i]!='\n')
    {
        i++;
    }

    for (int j = 0; second_string[j]!='\0'; j++, i++)
    {
        first_string[i] = second_string[j];
    }

    first_string[i] = '\0';
    
    printf("Concatenation: %s\n", first_string);
}

int main ()
{
    char string[100], string1[100];

    printf("Enter the first string: ");
    fgets(string, sizeof(string), stdin);
    printf("Enter the second string: ");
    fgets(string1, sizeof(string1), stdin);

    cat(string, string1);


    return 0;
}