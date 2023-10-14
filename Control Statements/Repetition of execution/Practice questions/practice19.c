// Write a C program to find sum of all even numbers between 1 to n.
#include <stdio.h>
void main (void) {
    int i = 1, n, sum = 0;
    printf("Input upper limit of even number: ");
    scanf("%d", &n);
    printf("Sum of even numbers between %d to %d: ", i, n);
    for (i = 1; i<=n; i++) {
        if (i%2==0)
            sum += i;
    }
    printf("%d", sum);
    
}