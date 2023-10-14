// Write a C program to print all natural numbers in reverse (from n to 1). – using while loop
#include <stdio.h>
void main(void) {
    int i = 1;
    int n;
    printf("Input N: ");
    scanf("%d", &n);
    printf("Natural numbers from %d-%d in reverse: \n%d", n, i, n);
    while (n>i) {
        n--;
        printf(", %d", n);
    }
}