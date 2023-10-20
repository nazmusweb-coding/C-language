// Write a C program to check whether a number is Perfect number or not.
#include <stdio.h>
void inPut(int *n);
void perFect(int n, int sum);

void main () {
    int n, sum = 0;
    inPut(&n);
    perFect(n, sum);
}

void inPut(int *n) {
    printf("Input any number: ");
    scanf("%d", &(*n));
}
void perFect(int n, int sum) {
    for (int i = 1; i < n; i++) {
        if (n%i==0) {
            sum = sum + i; // sum of n's proper positive divisors
        }
    }
    if (sum == n) // Perfect number is a positive integer which is equal to the sum of its proper positive divisors
        printf("%d is PERFECT NUMBER", n);
    else
        printf("%d is NOT PERFECT NUMBER", n);
}