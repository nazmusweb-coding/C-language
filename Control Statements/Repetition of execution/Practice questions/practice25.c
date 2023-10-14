// Write a C program to swap first and last digits of a number.
// work on pregress
#include <stdio.h>
void main (void) {
    int n, x, sum = 0, temp;
    printf("Input any number: ");
    scanf("%d", &n);
    temp = n;
    printf("Number after swapping first and last digit: ");
    while (n>0) {
        x = n%10;
        n = n/10;
        sum += x;
    }
    printf("%d", temp%10);
    printf("%d", x);
    
}