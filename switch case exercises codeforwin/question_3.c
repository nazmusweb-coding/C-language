// Write a C program to check whether an alphabet is vowel or consonant using switch case.
#include <stdio.h>
void find(char alphabet);
void main() {
    char alphabet;
    printf("Input alphabet: ");
    scanf("%c", &alphabet);
    find(alphabet);
}
void find(char alphabet) {
    switch (alphabet)
    {
    case 'A':
        printf("'%c' is vowel", alphabet);
        break;
    case 'E':
        printf("'%c' is vowel", alphabet);
        break;
    case 'I':
        printf("'%c' is vowel", alphabet);
        break;
    case 'O':
        printf("'%c' is vowel", alphabet);
        break;
    case 'U':
        printf("'%c' is vowel", alphabet);
        break;
    case 'a':
        printf("'%c' is vowel", alphabet);
        break;
    case 'e':
        printf("'%c' is vowel", alphabet);
        break;
    case 'i':
        printf("'%c' is vowel", alphabet);
        break;
    case 'o':
        printf("'%c' is vowel", alphabet);
        break;
    case 'u':
        printf("'%c' is vowel", alphabet);
        break;
    default:
        printf("'%c' is consonant", alphabet);
        break;
    }
}