// Write a C program to check whether a character is uppercase or lowercase alphabet.
#include <stdio.h>
void finder(char character);
void main() {
    char c;
    printf("Input a character: ");
    scanf("%c", &c);
    finder(c);
}
void finder(char character) {
    if (character>='A' && character<='Z')
    {
        printf("'%c' is a uppercase alphabet", character);
    }
    else if (character>='a' && character<='z')
    {
        printf("'%c' is a lowercase alphabet", character);
    }
    else
    {
        printf("'%c' is not a alphabet", character);
    }
}