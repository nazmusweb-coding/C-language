// Write a function to calculate the sum, product & average of 2 numbers.
// Print the values in main function
// we can't return three values from a function, here pointer comes as life-saver
#include <stdio.h>
// function declaration
void input(int *a, int *b);
// this is an example of mixed call by value and reference
/*  Here we will be calculating the value in another function 
    and return the value using pointers in main fuction,
    we will store the calculated value by pointers in some
    variables inside main function. then print their value. */
void dowork(int a, int b, int *sum, int *proudct, float *average);

void main(void) {
    int a, b, sum, product;
    float average;
    // function call
    /*  we passed the argument(value) and returned calculated values from 
        other function through pointers in main function into variables */
    input(&a, &b);
    dowork(a, b, &sum, &product, &average);
    // printing the stored value of variables that i got from dowork() by pointers
    printf("Sum     = BDT %d/-\nProduct = BDT %d/-\nAverage = BDT %0.2f/-", sum, product, average);
}

// function definition
void input(int *a, int *b) {
    printf("Enter the numbers: ");
    scanf("%d%d", &(*a), &(*b));
}
// This is what called by value+referece looks like
void dowork(int a, int b, int *sum, int *product, float *average) {
    *sum = a+b;
    *product = a*b;
    *average = (float)(a+b)/2;
}