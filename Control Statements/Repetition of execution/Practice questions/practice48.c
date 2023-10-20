// Write a C program to print Fibonacci series up to n terms.
#include <stdio.h>
void inPut(int *n);
void fiboNacci(int n);

void main () {
    int n;
    inPut(&n);
    fiboNacci(n);
}

void inPut(int *n) {
    printf("Input number of terms: ");
    scanf("%d", &(*n));
}

void fiboNacci(int n) {
    int i =0, j =1, k = 0;
    printf("Fibonacci series: %d, %d", i, j); // default series here 0,1 
    for (int a = 1; a <= (n-2); a++) {
        k = i+j;
        i = j;
        j = k;
        printf(", %d", k);
    }
}