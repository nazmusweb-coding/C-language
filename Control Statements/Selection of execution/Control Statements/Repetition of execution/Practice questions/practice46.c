// Write a C program to check whether a number is Strong number or not
#include <stdio.h>
void inPut(int *n);
void stRong(int a, int n, int temp, int fact, int sum);

void main () {
    int a, n, temp, fact = 1, sum = 0;
    inPut(&n);
    stRong(a, n, temp, fact, sum);
}
void inPut(int *n) {
    printf("Input number: ");
    scanf("%d", &(*n));
}
void stRong(int a, int n, int temp, int fact, int sum) {
    temp = n; // stored n's value in a temp variable, because we will work with n variable that will change it's original value so in order to keep record of real value i assigned it into another variable
    while (n>0) { 
        a = n%10; // for getting individual digits from the number
        for (int i = 1; i <= a; i++) {
            fact = fact*i; // it will calculate the individual digit's factorial
        }
        sum = sum + fact; // it will calculate the sum of all individual digit's factorials in a number, example( 145= 1!+4!+5! )
        n = n/10; // it will move onto next digit
        fact = 1; // assigned 1, to calculate next digit's factorial.
    }
    if (temp==sum) // Strong number is a special number whose sum of factorial of digits is equal to the original number.
        printf("%d is STRONG NUMBER", temp);
    else
        printf("%d is NOT STRONG NUMBER", temp);
}