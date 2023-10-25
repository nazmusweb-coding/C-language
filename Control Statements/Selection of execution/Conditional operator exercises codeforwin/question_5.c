// Write a C program to check whether character is an alphabet or not using conditional operator.
#include <stdio.h>
void find_alphabet(char alphabet);
void main() {
    char alphabet;
    printf("Enter a character: ");
    scanf("%c", &alphabet);
    find_alphabet(alphabet);
}
void find_alphabet(char alphabet) {
    (alphabet>='A' && alphabet<='Z' || alphabet>='a' && alphabet<='z')? printf("%c is an alphabet", alphabet): printf("%c is not an alphabet", alphabet);
}