// Write a C program to check whether a year is leap year or not.
#include <stdio.h>
void find_leap_year(int year);
void main() {
    int n;
    printf("Input a year: ");
    scanf("%d", &n);
    find_leap_year(n);
}
void find_leap_year(int year) {
    if (year%4==0 && year%100!=0)
    {
        printf("%d is a Leap Year", year);
    }
    else if (year%400==0)
    {
        printf("%d is a Leap Year", year);
    }    
    else
    {
        printf("%d is not a Leap Year", year);
    }
}