// format specifier
#include <stdio.h>

void main(void) {
    int age = 22;
    char star = '*';
    float price = 100.00;

    // declaring pointers
    int *ptr = &age;
    char *ptr1 = &star;
    float *ptr2 = &price;

    // format specifiers
    // printing memory location of pointers and variables(%p,%u)
    /* 1. %p = prints memory address of pointer and variable in hexadecimal value */
    printf("Address in hexadecimal:(%%p)\n");
    printf("%p\n", &age);
    printf("%p\n", &star);
    printf("%p\n", &price);
    printf("%p\n", &ptr);
    printf("%p\n", &ptr1);
    printf("%p\n", &ptr2);
    // &age and ptr both are same here
    /* writing only ptr means print the memory address that 
     stored in ptr pointer which ultimately means &age */
    printf("%p\n\n\n", ptr);

    /* 2. %u = prints memory address of pointer and variable in unsigned int value */
    printf("Address in unsigned integer:(%%u)\n");
    printf("%u\n", &age);
    printf("%u\n", &star);
    printf("%u\n", &price);
    printf("%u\n", &ptr);
    printf("%u\n", &ptr1);
    printf("%u\n", &ptr2);
    // &age and ptr both are same here
    /* writing only ptr means print the memory address that 
     stored in ptr pointer which ultimately means &age */
    printf("%u\n\n\n", ptr);

    // printing value of pointers and variables(%d,%f,%c)
    /**/
    printf("Value of variables and pointers using (value of address operator) and (address at operator): *, &\n");
    printf("%d\n", age);
    printf("%c\n", star);
    printf("%f\n", price);
    printf("%d\n", *ptr);
    printf("%c\n", *ptr1);
    printf("%f\n", *ptr2);
    /* here im using both operator together, its like print tha value(22) stored at this address(&age) 
     we can say, printing value at(address of age) = *(&age) */
    printf("%d\n", *(&age));
    printf("%c\n", *(&star));
    printf("%f\n", *(&price));




}