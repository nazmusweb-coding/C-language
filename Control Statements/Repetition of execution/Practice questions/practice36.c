// Write a C program to find HCF (GCD) of two numbers.
// important
#include <stdio.h>
void main (void) {
    int i=2, n, m, hcf, min;
    printf("Input first number: ");
    scanf("%d", &n);
    printf("Input second number: ");
    scanf("%d", &m);
    min = (n<m)? n : m;
    for (int i = 1; i<=min; i++) {
        if (n%i==0 && m%i==0) {
            hcf = i;
        }
    }
    printf("%d", hcf); // it will print the product of common gcd
}