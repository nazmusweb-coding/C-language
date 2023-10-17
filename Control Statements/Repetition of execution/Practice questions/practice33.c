// Write a C program to find power of a number using for loop.
#include <stdio.h>
void main (void) {
    int i, base = 1, exponent, base1;
    printf("Input base: ");
    scanf("%d", &base);
    printf("Input exponent: ");
    scanf("%d", &exponent);
    base1 = base;
    for (int i = 1; i<exponent; i++) {
        base = base * base1; // base will be multiplied by base again and again and stored into base variable like 2x2x2x2x2...
    }
    printf("%d^%d = %d", base1, exponent, base);
}