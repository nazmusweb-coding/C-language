// Write a C program to compare two strings.
// without using strcmp()
// important
#include <stdio.h>
int cmp (char first_string[], char second_string[])
{
    int i = 0, j = 0;

    // counting length of first string
    while (first_string[i]!='\0')
    {
        i++;
    }

    // counting length of second string
    while (second_string[j]!='\0')
    {
        j++;
    }

    // using ternary operator i used maximum length string as condition because it is very important to compare both strings accurately
    for (int k = 0; (i>=j)? first_string[k]!='\0': second_string[k]!='\0'; k++)
    {
        // comparing both string's character's ascii value 
        if (first_string[i]>second_string[i])
        {
            return 1;
        }
        else if (first_string[i]<second_string[i])
        {
            return -1;
        }
        // the last case is that both strings are same
        else
        {
            return 0;
        }
    }

}

int main ()
{
    char string[100], string1[100];

    printf("Enter the first string: ");
    fgets(string, sizeof(string), stdin);
    printf("Enter the second string: ");
    fgets(string1, sizeof(string1), stdin);

    printf("%d", cmp(string, string1));


    return 0;
}