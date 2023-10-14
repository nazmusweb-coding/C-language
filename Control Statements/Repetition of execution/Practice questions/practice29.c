// Write a C program to check whether a number is palindrome or not.
// work in progress
#include <stdio.h>
void main (void) {
    int n, x;
    printf("Input any number: ");
    scanf("%d", &n);
    while (n>0) {
        x = n%10;
        n = n/10;
        printf("%d", x);
    }
    
}