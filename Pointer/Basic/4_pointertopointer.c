// pointer to pointer
#include <stdio.h>

void main(void) {
    int age = 22;
    char star = '*';
    float price = 100.00;
    int *ptr = &age;
    char *ptr1 = &star;
    float *ptr2 = &price;
    // syntax of pointer to pointer
    // have to add ** before variable name, nothing else
    int **pptr = &ptr;
    char **pptr1 = &ptr1;
    float **pptr2 = &ptr2;

    // printing value of pointer to pointer variable
    // works same as pointer
    printf("%d\n", **pptr);
    printf("%c\n", **pptr1);
    printf("%f\n", **pptr2);  
}