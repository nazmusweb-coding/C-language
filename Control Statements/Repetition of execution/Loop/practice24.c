// Write a C program to find sum of first and last digit of a number.
#include <stdio.h>
void main (void) {
    int n, x, temp, first_digit, sum;
    printf("Input number: ");
    scanf("%d", &n);
    temp = n;
    while (n>0) {
        x = n%10;
        n = n/10;
    }
    first_digit = temp%10; // stored last digit of inputed number
    sum = x + first_digit; // sum of first and last digits of inputed number 
    printf("Sum of first and last digit: %d", sum);
}