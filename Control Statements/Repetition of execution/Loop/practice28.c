// Write a C program to enter a number and print its reverse.
#include <stdio.h>
void main (void) {
    int n, x;
    printf("Input number: ");
    scanf("%d", &n);
    printf("Reverse of %d = ", n);
    while (n>0) {
        x = n%10;
        n = n/10;
        printf("%d", x);
    }
    
}