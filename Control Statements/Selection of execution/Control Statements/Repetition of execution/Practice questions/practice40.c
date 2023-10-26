// Write a C program to find sum of all prime numbers between 1 to n.
#include <stdio.h>
void inPut(int *n);
void findPrime(int n, int *sum);

void main () {
    int n, sum = 0;
    inPut(&n);
    findPrime(n, &sum);
    printf("Sum of prime numbers between 1-%d: %d", n, sum);
}

void inPut(int *n) {
    printf("Input upper limit: ");
    scanf("%d", &(*n));             // returned n's value to main fucntion in real address through pointer
}

void findPrime(int n, int *sum) {
    int factor = 0;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++)
            if (i%j==0)
                factor++;
        if (factor==2)
            *sum += i;              // it will add all the prime numbers and calculate their total(sum = sum + i)
        factor = 0;                 // updating the factor value to 0 again for counting the factors of other numbers from 0 
    }
    
}