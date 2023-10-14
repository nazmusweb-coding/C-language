// Write a C program to print all natural numbers from 1 to n using while loop
#include <stdio.h>
void main(void) {
    int i = 1;
    int n;
    printf("Input upper limit: ");
    scanf("%d", &n);
    printf("Natural numbers from %d to %d: %d", i, n, i);
    while (i<n) {
        i++;
        printf(", %d", i);
    }
    
}