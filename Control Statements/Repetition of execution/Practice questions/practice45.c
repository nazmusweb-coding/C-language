// Write a C program to print all Perfect numbers between 1 to n.
#include <stdio.h>
void inPut(int *n);
void perFect(int n, int sum);

void main () {
    int n, sum = 0;
    inPut(&n);
    perFect(n, sum);
}

void inPut(int *n) {
    printf("Input upper limit: ");
    scanf("%d", &(*n));
}
void perFect(int n, int sum) {
    printf("Perfect numbers between 1 to %d: ", n);
    for (int i = 1; i <= n; i++) { // it is for range
        for (int j = 1; j < i; j++) { // it is for checking if the number is perfect or not
            if (i%j==0) {
                sum = sum + j; // adding all divisors in sum
            }
        }
        if (sum==i) // if sum of all divisors are equal to i then i is a perfect number
            printf("%d ", i);
        sum = 0; // assigned 0 value, to start calculation again for next number in the range
        
        
    }
    
}