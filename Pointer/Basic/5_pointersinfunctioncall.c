// Pointers in Function call
/* There are two ways of calling a function:
    1. Call by value(value of variable)
    2. Call by reference(address of variable) */
#include <stdio.h>

// function declaration/prototype
void square(int n); // assigned a variable(value) as perameter
void _square(int *n); //assigned a pointer as perameter

void main(void) {
    int number = 4;
    // call by value
    /* I passed value of variable as argument */
    square(number);
    printf("Number = %d\n", number);

    // call by reference
    /* I passed address of variable as argument */
    _square(&number);
    printf("Number = %d\n", number); // value of number here will be changed by pointer expression
}

// function definition
void square(int n) {
    n = n*n;
    printf("Square = %d\n", n);
}
/*  I am working with pointer here
    formal parameter = pointer
    remember pointer has the ability to work with memory address
    so whatever operation we execute, the value of argument will 
    be changed from it's core or root. It means if the value of n 
    is changed by the pointer-made expression then the value of n 
    will be changed forever in the memory
    In short,The power of pointer is so supreme that it can completely 
    change any variable's value from root*/
void _square(int *n) {
    *n = (*n) * (*n);
    printf("Square = %d\n", *n);
}