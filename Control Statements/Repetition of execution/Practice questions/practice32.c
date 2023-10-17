// Write a C program to print all ASCII character with their values.
#include <stdio.h>
void main(void) {
    for (int i = 0; i <= 255; i++) {
        printf("ASCII value of character %c = %d\n", i, i);
    }
}