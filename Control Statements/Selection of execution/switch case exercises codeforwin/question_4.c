// Write a C program to find maximum between two numbers using switch case.
#include <stdio.h>
void maximum(int number1, int number2);
void main() {
    int a, b;
    printf("Input first number: ");
    scanf("%d", &a);
    printf("Input second number: ");
    scanf("%d", &b);
    maximum(a, b);
}
void maximum(int number1, int number2) {
    switch (number1>number2)
    {
        case 0:
            printf("Maximum: %d", number2);
            break;
        case 1:
            printf("Maximum: %d", number1);
            break;
    }
}