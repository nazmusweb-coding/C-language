// Write a C program to calculate sum of digits of a number.
#include <stdio.h>
void main (void) {
    int n, x, sum = 0;
    printf("Input any number: ");
    scanf("%d", &n);
    while (n>0) {
        x = n%10;
        n = n/10;
        sum += x;
    }
    printf("Sum of digits: %d", sum);  
}