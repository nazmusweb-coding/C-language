// Write a C program to print multiplication table of any number.
#include <stdio.h>
void main (void) {
    int n;
    printf("Input num: ");
    scanf("%d", &n);
    for (int i = 1; i<=10; i++) {
        printf("%d x %d = %d\n", n, i, n*i);
    }
}