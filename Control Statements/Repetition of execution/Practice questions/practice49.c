// Write a C program to find one’s complement of a binary number.
// work in progress.
#include <stdio.h>
void inPut(int *n);
void comPlement(int n);

void main () {
    int n;
    inPut(&n);
    comPlement(n);
}
void inPut(int *n) {
    printf("Input binary number: ");
    scanf("%d", &(*n));
}
void comPlement(int n) {
}