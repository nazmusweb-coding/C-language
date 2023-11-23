// 2x3
// we will store 3 subject marks of 2 children
#include <stdio.h>
void main (void) {
    int marks[2][3];
    marks[0][0] = 98;
    marks[0][1] = 97;
    marks[0][2] = 93;
    marks[1][0] = 90;
    marks[1][1] = 99;
    marks[1][2] = 95;
    for (int i = 0; i<3; i++) {
        printf("%d number: %d\n", i, marks[0][i]);
        printf("%d number: %d\n", i, marks[1][i]);
    }
}