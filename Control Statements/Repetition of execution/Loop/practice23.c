// Write a C program to find first and last digit of a number
#include <stdio.h>
void main (void) {
    int n, x, y, temp;
    printf("Input number: ");
    scanf("%d", &n);
    temp = n;
    while (n>0) {
        x = n%10;
        n = n/10;
    }
    printf("First digit: %d\n", x);
    printf("Last digit: %d", temp%10);
}