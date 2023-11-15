// Write a program in c to find the maximum number between two numbers using a pointer
#include <stdio.h>
// funtion declaration/prototype(with pointers)
void input(int *a, int *b);
void max(int *a, int *b);

void main(void) {
    int a, b;
    // function call by reference
    input(&a, &b);
    max(&a, &b);
}

// function definition
void input(int *a, int *b) {
    printf("Enter the numbers: ");
    scanf("%d%d", &(*a), &(*b));
}
void max(int *a, int *b) {
    if (*a>*b)
        printf("\n%d is Maximum.", *a);
    else
        printf("\n%d is Maximum.", *b);
}