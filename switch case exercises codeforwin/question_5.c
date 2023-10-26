// Write a C program to check whether a number is even or odd using switch case.
#include <stdio.h>
void find_even_or_odd(int number);
void main() {
    int n;
    printf("Input number: ");
    scanf("%d", &n);
    find_even_or_odd(n);
}
void find_even_or_odd(int number) {
    switch (number%2==0)
    {
    case 0:
        printf("Odd number");
        break;
    case 1:
        printf("Even number");
        break;
    }
}