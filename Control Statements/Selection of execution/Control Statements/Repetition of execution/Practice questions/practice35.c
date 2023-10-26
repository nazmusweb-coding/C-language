// Write a C program to calculate factorial of a number.
#include <stdio.h>
void main (void) {
    int n, fact = 1;
    printf("Input number: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
        fact = fact * i;
    printf("Factorial: %d", fact);
}