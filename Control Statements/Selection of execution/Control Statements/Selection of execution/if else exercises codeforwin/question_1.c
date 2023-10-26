// Write a C program to find maximum between two numbers.
#include <stdio.h>
void maximum(int a, int b);
void main() {
    int a, b;
    printf("Input first number: ");
    scanf("%d", &a);
    printf("Input second number: ");
    scanf("%d", &b);
    maximum(a, b);
}
void maximum(int a, int b) {
    if (a>b)
    {
        printf("Maximum: %d", a);
    }
    else
    {
        printf("Maximum: %d", b);
    }
}