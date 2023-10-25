// Write a C program to check whether a character is alphabet or not.
#include <stdio.h>
void find_alphabet(char alphabet);
void main() {
    char alphabet;
    printf("Enter a character: ");
    scanf("%c", &alphabet);
    find_alphabet(alphabet);
}
void find_alphabet(char alphabet) {
    if (alphabet>='A' && alphabet<='Z')
    {
        printf("'%c' is a alphabet", alphabet);
    }
    else if (alphabet>='a' && alphabet<='z')
    {
        printf("'%c' is a alphabet", alphabet);
    }
    else
    {
        printf("'%c' is not a alphabet", alphabet);
    }
}