// Write a C program to print all odd number between 1 to n.
#include <stdio.h>
void main (void) {
    int n;
    printf("Input upper limit: ");
    scanf("%d", &n);
    printf("Odd numbers between 1 to 10:\n1");
    for (int i=2; i<=n; i++) {
        if (i%2!=0)
            printf(", %d", i);
    }
}