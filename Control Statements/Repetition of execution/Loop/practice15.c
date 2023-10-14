// Write a C program to print all alphabets from a to z. – using while loop
#include <stdio.h>
void main(void) {
    char a = 'a';
    char b = 'z';
    printf("Alphabets: %c", a);
    while (a<b) {
        a++;
        printf(", %c", a);
    }    
}