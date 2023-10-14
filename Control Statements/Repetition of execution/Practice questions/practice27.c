// Write a C program to calculate product of digits of a number.
#include <stdio.h>
void main (void) {
    int n, x, product = 1;
    printf("Input number: ");
    scanf("%d", &n);
    while (n>0) {
        x = n%10;
        n = n/10;
        product *= x;
    }
    printf("Product of digits: %d", product);
}