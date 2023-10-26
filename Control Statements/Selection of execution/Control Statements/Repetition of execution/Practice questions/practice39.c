// Write a C program to print all Prime numbers between 1 to n.
#include <stdio.h>
void inPut(int *m, int *n);
int primeNumbers(int m, int n);

void main () {
    int m, n;
    inPut(&m, &n); // using pointers i returned the input value to main function
    printf("Prime numbers between 1-20: ");
    primeNumbers(m, n); 
}

void inPut(int *m, int *n) {
    printf("Input lower limit: ");
    scanf("%d", &(*m));
    printf("Input upper limit: ");
    scanf("%d", &(*n));
}

int primeNumbers(int m, int n) {
    int factor = 0;
    for (int i = m; i <= n; i++) {
        for (int j = 1; j <=i; j++)
            if (i%j==0)
                factor++;  
        if (factor==2)              // if the number has only 2 factors then its prime
            printf("%d ", i);
    factor = 0; // updating the factor value to 0 again for counting the factors of other numbers from 0
    }
    
}