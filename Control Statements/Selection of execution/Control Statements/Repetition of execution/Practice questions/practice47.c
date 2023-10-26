// Write a C program to print all Strong numbers between 1 to n.
#include <stdio.h>
void inPut(int *n);
void stRong(int a, int n, int fact, int sum, int temp);

void main() {
    int a, b, n, fact = 1, sum = 0, temp;
    inPut(&n);
    stRong(a, n, fact, sum, temp);
}

void inPut(int *n) {
    printf("Input upper limit: ");
    scanf("%d", &(*n));
}
void stRong(int a, int n, int fact, int sum, int temp) {
    printf("Strong numbers between 1-%d: ", n);
    for (int i = 1; i <= n; i++) { // it is for range
        temp = i; // stored i's value in a temp variable, because we will work with n variable that will change it's original value so in order to keep record of real value i assigned it into another variable
        while (temp>0) {
            a = temp%10; // for getting individual digits from numbers
            for (int j = 1; j <= a; j++) {
                fact = fact * j; // it will calculate the individual digit's factorial
            }
            sum = sum + fact; // it will calculate the sum of all individual digit's factorials in a number, example( 145= 1!+4!+5! )
            temp = temp/10; // it will move onto next digit
            fact = 1; // assigned 1, to calculate next digit's factorial.
        }
        if (i==sum) // Strong number is a special number whose sum of factorial of digits is equal to the original number.
            printf("%d ", i);
        sum = 0; // assigned 0, to calculate next digits's sum of all individual digit's factorial in next number.
    }
    
}