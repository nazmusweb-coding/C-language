//find output

#include <stdio.h>

void main(void) {
    int *ptr;
    int x;

    // storing address of x variable in ptr pointer
    ptr = &x;
    // assigning value in ptr pointer
    *ptr = 0;

    printf("X = %d\n", x);
    printf("*ptr = %d\n", *ptr);

    *ptr += 5;
    printf("X = %d\n", x);
    printf("*ptr = %d\n", *ptr);

    (*ptr)++;
    printf("X = %d\n", x);
    printf("*ptr = %d\n", *ptr);
}

/*  Output:
    X = 0
    *ptr = 0
    X = 5
    *ptr = 5
    X = 6
    *ptr = 6  */