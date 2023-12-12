// Write a C program to toggle case of each character of a string.
#include <stdio.h>

void toggle (char string[])
{
    for (int i = 0; string[i]!='\0'; i++)
    {
        if (string[i]>='A' && string[i]<='Z')
        {
            string[i] = string[i]+32;
        }
        else if (string[i]>='a' && string[i]<='z')
        {
            string[i] = string[i]-32;
        }
        
    }
    
    printf("Toggle case: %s", string);
}

int main ()
{
    char string[100];

    printf("Enter the string: ");
    fgets(string, sizeof(string), stdin);

    toggle(string);


    return 0;
    
}