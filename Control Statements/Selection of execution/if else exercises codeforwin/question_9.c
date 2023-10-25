// Write a C program to input any character and check whether it is alphabet, digit or special character.
#include <stdio.h>
void finder(char character);
void main() {
    char c;
    printf("Input a character: ");
    scanf("%c", &c);
    finder(c);
}
void finder(char character) {
    if (character>='A' && character<='Z' || character>='a' && character<='z')
    {
        printf("'%c' is an alphabet", character);
    }
    else if (character>='0')
    {
        printf("'%c' is a digit", character);
    }
    else
    {
        printf("'%c' is an special character", character);
    }
}