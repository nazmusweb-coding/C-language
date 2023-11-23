// Pointer can be incremented & decremented
// pointer helps us to access previous and next index using loop or in any other custom made way by the coder
#include <stdio.h>
void main (void) {
    // case 1 int
    int age = 22;
    int *ptr = &age;
    printf("ptr = %u\n", ptr);
    *ptr++; // it will increase the size of age by 4 bytes
    printf("ptr = %u\n", ptr);
    printf("%d\n", *ptr); // it wont increase the value when using unary operator it will only work with index increment and decrement in memory location
    ptr--; // it will decrease the size of age by 4 bytes
    printf("ptr = %u\n", ptr);

    // case 2 - float
    float price = 20.00;
    float *ptr1 = &price;
    printf("ptr1 = %u\n", ptr1);
    ptr1++; // it will increase the size of age by 4 bytes
    printf("ptr1 = %u\n", ptr1);
    printf("%f\n", *ptr1); // it wont increase the value when using unary operator it will only work with index increment and decrement in memory location
    ptr1 --; // it will decrease the size of age by 4 bytes
    printf("ptr1 = %u\n", ptr1);

    // case 3 - character
    char name = '*';
    char *ptr2 = &name;
    printf("ptr2 = %u\n", ptr2);
    ptr2++;
    printf("ptr2 = %u\n", ptr2);
    printf("%c\n", *ptr2); // it wont increase the value when using unary operator it will only work with index increment and decrement in memory location
    ptr2 --; // it will decrease the size of age by 4 bytes
    printf("ptr2 = %u\n", ptr2);
}