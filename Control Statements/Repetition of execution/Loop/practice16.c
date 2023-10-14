// Write a C program to print all even numbers between 1 to n. – using while loop
#include <stdio.h>
void main(void) {
    int i = 4, n;
    printf("Input upper range: ");
    scanf("%d", &n);
    printf("Even numbers between %d to %d:\n2", i, n);
    while (i<=n) {
        i++;
        if (i%2==0)
            printf(", %d", i);
    }
}