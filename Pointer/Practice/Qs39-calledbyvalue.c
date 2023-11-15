// Will the address output be same?
#include <stdio.h>
void printAddress(int n);

int main(void) {
    int n = 4;
    printf("%p\n", &n);
    printAddress(n);
}
void printAddress(int n) {
    printf("%p\n", &n);
}


/* Output:
    The answer is no,
    both of the address will be
    different because it is called
    by value, and funciton called
    by value gets a copy of real
    argument so both address should
    be different. */