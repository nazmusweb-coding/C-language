// Write a C program to find maximum between three numbers using conditional operator.
#include <stdio.h>
void maximum(int a, int b, int c);
void main() {
    int a, b, c;
    printf("Input first number: ");
    scanf("%d", &a);
    printf("Input second number: ");
    scanf("%d", &b);
    printf("Input third number: ");
    scanf("%d", &c);
    maximum(a, b, c);
}
void maximum(int a, int b, int c) {
    (a>b && a>c)? printf("Maximum: %d", a): (b>a && b>c)? printf("Maximum: %d", b): printf("Maximum: %d", c);
}