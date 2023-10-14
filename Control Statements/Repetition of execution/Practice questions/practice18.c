// Write a C program to find sum of all natural numbers between 1 to n.
#include <stdio.h>
void main (void) {
    int i = 1, n, sum = 0;
    printf("Input upper limit: ");
    scanf("%d", &n);
    printf("Sum of natural numbers %d-%d: ", i, n);
    for (i = 1; i<=n; i++) {
        sum += i;
    }
    printf("%d", sum);
}