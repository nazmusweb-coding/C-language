// Write a program to store the first n fibonacci numbers.
#include <stdio.h>
void fibonnachi(int n);

void main (void) {
    int n;
    printf("Enter n(n>2): ");
    scanf("%d", &n);
    fibonnachi(n);
}

void fibonnachi(int n) {
    int fib[n];
    fib[0]=0;
    fib[1]=1;
    for (int i = 0; i < n-1; i++)
    {
        fib[i+2] = fib[i]+fib[i+1];
        printf("%d\t", fib[i+2]);
    }
}