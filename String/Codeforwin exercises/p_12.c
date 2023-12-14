// Write a C program to check whether a string is palindrome or not.
// important
#include <stdio.h>

void check (char string[])
{
    char reversed_string[100];
    int len, startIndex, endIndex;

    //counts length of string
    for (len = 0; string[len]!='\n'; len++);

    startIndex = 0;
    endIndex = len-1;//because index start from 0

    while (startIndex <= endIndex)
    {
        //comparing index value of string from both sides
        if (string[startIndex]!=string[endIndex])
        {
            // if the character doesnt match it will break the loop
            break;
        }
        startIndex++;
        endIndex--;
    }
    
    //if startindex is more than or equal to endindex it means the while loop didnt break
    if (startIndex>=endIndex)
    {
        printf("Palindrome");
    }
    else
    {
        printf("Not a Palidrome");
    }

}

int main ()
{
    char string[100];

    printf("Enter the string: ");
    fgets(string, sizeof(string), stdin);

    check(string);


    return 0;
}