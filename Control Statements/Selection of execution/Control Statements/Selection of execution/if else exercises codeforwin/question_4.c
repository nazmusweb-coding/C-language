// Write a C program to check whether a number is divisible by 5 and 11 or not.
#include <stdio.h>
void condition(int number);
void main() {
    int n;
    printf("Input a number: ");
    scanf("%d", &n);
    condition(n);
}
void condition(int number) {
    if (number%5==0 && number%11==0)
    {
        printf("%d is divisible by 5 and 11", number);
    }
    else
    {
        printf("%d is not divisible by 5 and 11", number);
    }
}