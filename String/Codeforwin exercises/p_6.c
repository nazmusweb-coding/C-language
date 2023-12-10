// Write a C program to convert uppercase string to lowercase.
// without using strlwr()
#include <stdio.h>

void lwr (char string[])
{
    for (int i = 0; string[i]!='\0'; i++)
    {
        if (string[i]>='A' && string[i]<='Z')
        {
            //difference between lowercase and uppercase ascii values is 32
            string[i] = string[i]+32;
        }
        
    }

    printf("Lowercase: %s", string);
}

int main ()
{
    char string[100];

    printf("Enter the string: ");
    fgets(string, sizeof(string), stdin);

    lwr(string);


    return 0;
}