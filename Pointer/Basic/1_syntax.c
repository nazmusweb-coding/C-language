// writing syntax of pointer
#include <stdio.h>
// * = value at address (operator)
// & = address of (operator)
void main(void) {
    int age = 22;
    int gae = 11;
    // *ptr is a pointer that stores the address of age variable
    int *ptr = &age;
    // *ptr1 is a pointer that stores the address of gae varible
    int *ptr1 = &gae;

    // it will show the value stored in the address
    /* _age is a new variable that stores the value of 
     *ptr variable which is a pointer, and 
     *ptr stores the address of age variable,
     so ultimately *ptr is storing the value of age
     and we are storing it in _age variable now*/
    int _age = *ptr;
    /* _gae is a new variable that stores the value of 
     *ptr1 variable which is a pointer, and 
     *ptr1 stores the address of gae variable,
     so ultimately *ptr1 is storing the value of age
     and we are storing it in _gae variable now*/
    int _gae = *ptr1;
    printf("%d\n", age);
    printf("%d", gae);
}