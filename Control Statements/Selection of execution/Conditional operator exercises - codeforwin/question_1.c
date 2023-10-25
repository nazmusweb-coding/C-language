// Write a C program to find maximum between two numbers using conditional operator.
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
    (a>b)? printf("Maximum: %d", a): printf("Maximum: %d", b);
}