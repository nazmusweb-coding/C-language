// Write a C program to check whether a number is Prime number or not.
#include <stdio.h>
void main (void) {
    int n;
    int factor = 0;
    printf("Input any number: ");
    scanf("%d", &n);
    for (int i = 1; i <=n; i++)
        if (n%i==0)
            factor++;    
    if (factor==2)                  // if the number has only 2 factors then its prime
        printf("%d is prime number.\n", n);
    else                            // else if has more then 2 factors or less then 2 factors its not prime
        printf("%d is not prime number.\n", n);

}