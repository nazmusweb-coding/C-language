// Write a C program to print all Armstrong numbers between 1 to n.
// important
#include <stdio.h>
#include <math.h>
void inPut(int *n);
void armStrong(int a, float b, int c, int d, int n, int temp);

void main () {
    int a, c, d, n, m, temp = 0;
    float b = 0;
    inPut(&n);
    armStrong(a, b, c, d, n, temp);
}

void inPut(int*n) {
    printf("Input the upper limit: ");
    scanf("%d", &(*n));
}

void armStrong(int a, float b, int c, int d, int n, int temp) {
    printf("All armstrong numbers between 1-%u: ", n);
    for (int i = 1; i <= n; i++) {
        c = i; // we assigned i's value in c and we will work with it in 2nd loop
        d = i; // same here, with i's value in d we will work with it in 1st loop
        while (d>0) { // for checking how many digits are in a number
            d = d/10;
            temp++;
        }
        while (c>0) {
            a = c%10;
            b = b + (pow(a, temp)); // a will be power by temp(number of digits)
            c = c/10;
        }
        if (b==i)
            printf("%d ", i); // i didnt change i before, to compare its real value with b here
        b = 0; // assigning value 0, otherwise it will keep adding all the sum togheter so i have to initial it again with 0
        temp = 0; // assigning value 0, otherwise it will keep adding all the sum togheter so i have to initial it again with 0    
    }  
}