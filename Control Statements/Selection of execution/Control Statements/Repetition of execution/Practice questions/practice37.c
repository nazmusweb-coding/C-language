// Write a C program to find LCM of two numbers.
// important
#include <stdio.h>
void main (void) {
    int n, m, min, hcf = 1;
    printf("Input number1: ");
    scanf("%d", &n);
    printf("Input number2: ");
    scanf("%d", &m);
    // for making the program more efficient i decreased the loop runtime
    min = (n<m)? n : m;
    for (int i = 1; i <= min; i++) {
        if (n%i==0 && m%i==0) {
            n = n/i;
            m = m/i;
            hcf = hcf * i; // it will calculate the hcf
        }
    }
    hcf = hcf * n * m; // it will calculate the lmc
    printf("LCM = %d", hcf);
}