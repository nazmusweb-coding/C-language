// Write a C program to find all factors of a number.
#include <stdio.h>
void main (void) {
    int n;
    printf("Input number: ");
    scanf("%d", &n);
    printf("Factors of %d: 1", n);
    for (int i = 2; i <= n; i++)
        if (n%i==0)
            printf(", %d", i);
}