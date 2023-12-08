// Write a C program to convert lowercase string to uppercase.
// without using strupr()
#include <stdio.h>

void upr (char string[])
{
    for (int i = 0; string[i]!='\0'; i++)
    {
        if (string[i]>='a' && string[i]<='z')
        {
            //difference between lowercase and uppercase ascii values is 32
            string[i] = string[i]-32;
        }
        
    }
    
    printf("Uppercase: %s", string);
}

int main ()
{
    char string[100];

    printf("Enter string: ");
    fgets(string, sizeof(string), stdin);

    upr(string);


    return 0;
}