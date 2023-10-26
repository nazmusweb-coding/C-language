// Write a C program to check whether a number is negative, positive or zero.
#include <stdio.h>
void find_kind(int number);
void main() {
    int n;
    printf("Input a number: ");
    scanf("%d", &n);
    find_kind(n); 
}
void find_kind(int number) {
    if (number>0)
    {
        printf("%d is positive", number);
    }
    else if (number<0)
    {
        printf("%d is negative", number);
    }
    else
    {
        printf("%d is zero", number);
    }
}