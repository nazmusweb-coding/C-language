// Write a C program to check whether a number is even or odd.
#include <stdio.h>
void find_even_or_odd(int number);
void main() {
    int n;
    printf("Input a number: ");
    scanf("%d", &n);
    find_even_or_odd(n);
}
void find_even_or_odd(int number) {
    if (number%2==0)
    {
        printf("%d is even number", number);
    }
    else
    {
        printf("%d is odd number", number);
    }
}