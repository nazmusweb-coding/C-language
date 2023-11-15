// declaring pointers
#include <stdio.h>

void main(void) {
    int age = 22;
    char star = '*';
    float price = 100.00;

    // declaring pointers
    int *ptr = &age;
    char *ptr1 = &star;
    float *ptr2 = &price;

    printf("%p\n", &age);
    printf("%p\n", &star);
    printf("%p\n", &price);
    printf("%p\n", &ptr);
    printf("%p\n", &ptr1);
    printf("%p\n", &ptr2);
    printf("%p", ptr);
}