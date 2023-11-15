// Will the address output be same?
// 06:13:30
#include <stdio.h>
void printAddress(int *n);

int main(void) {
    int n = 4;
    printf("%p\n", &n);
    printAddress(&n);
}
void printAddress(int *n) {
    printf("%p\n", n); // n and &n is the same thing but here it should be n only beauce &n will print another variable's address here
}

/*  The answer is yes,
    because it is called by reference
    and called by reference function
    gets memory location access */