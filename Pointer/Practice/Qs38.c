// swap 2 numbers, a & b without using third variable
// third variable is easy, without third variable we need mathematical operation
// this was my second lab problem in 2nd semester
/*  Mathematical logic part:
    a = a + b
    b = a - b
    a = a - b   */

#include <stdio.h>
// function definition/protoype with perameters
void swap(int *a, int *b);

void main(void) {
    int a =10;
    int b =20;
    // function call by reference
    swap(&a, &b);    
    printf("A = %d and B = %d\n", a, b); 
}

// function definition
// pointers have power to change the value permanently from memory location
void swap(int *a, int *b) {
    *a = *a + *b;
    *b = *a - *b;
    *a = *a - *b;
}