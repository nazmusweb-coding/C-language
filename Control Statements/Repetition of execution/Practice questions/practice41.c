// Write a C program to find all prime factors of a number.
#include <stdio.h>
void main () {
    int n, factor = 0;
    printf("Input any number: ");
    scanf("%d", &n);
    printf("Prime factors of %d: ", n);
    for (int i = 1; i <= n; i++) {
        if (n%i==0) { // if n is divided by i then i will be investigated furthermore
            for (int j = 1; j <= i; j++)
                if (i%j==0)
                    factor++; 
            if (factor==2) // prime numbers have 2 factors only
                printf("%d ", i);
            factor = 0;  // updating the factor value to 0 again for counting the factors of other numbers from 0
        }   
    }
}