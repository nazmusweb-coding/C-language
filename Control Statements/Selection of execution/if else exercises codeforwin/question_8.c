// Write a C program to input any alphabet and check whether it is vowel or consonant.
#include <stdio.h>
void find_vowel(int alphabet);
void main() {
    char alphabet;
    printf("Input a alphabet: ");
    scanf("%c", &alphabet);
    find_vowel(alphabet);
}
void find_vowel(int alphabet) {
    if (alphabet>='A' && alphabet<='Z' || alphabet>='a' && alphabet<='z')
    {
        if (alphabet=='A' || alphabet=='a')
        {
            printf("'%c' is a vowel", alphabet);
        }
        else if (alphabet=='E' || alphabet=='e')
        {
            printf("'%c' is a vowel", alphabet);
        }
        else if (alphabet=='I' || alphabet=='I')
        {
            printf("'%c' is a vowel", alphabet);
        }
        else if (alphabet=='O' || alphabet=='o')
        {
            printf("'%c' is a vowel", alphabet);
        }
        else if (alphabet=='U' || alphabet=='u')
        {
            printf("'%c' is a vowel", alphabet);
        }
        else
        {
            printf("'%c' is a consonant", alphabet);
        }
    }
    else
    {
        printf("'%c' is not a alphabet.", alphabet);
    }    
}