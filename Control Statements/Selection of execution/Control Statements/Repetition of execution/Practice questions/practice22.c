// Write a C program to count number of digits in an integer number.
// it can only count upto 9 digits, because integer can't store more than 4 bytes
// for counting more digits, we can use float or double
#include <stdio.h>
void main(void) {
    int n, x, y = 0;
    printf("Input num: ");
    scanf("%d", &n);
    printf("Number of digits: ");
    while (n>0) {
        x = n%10;
        n = n/10;
        y += 1;
    }
    printf("%d", y);
}