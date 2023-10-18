// Write a C program to check whether a number is Prime number or not.
#include <stdio.h>
void main (void) {
    int n;
    printf("Input any number: ");
    scanf("%d", &n);
    for (int i = 2; i < n; i++)
    {
        if (n%i!=0 || n == 1 || n == 2 || n== 3)
            printf("%d is prime number", n);
            break;
    }
    
}