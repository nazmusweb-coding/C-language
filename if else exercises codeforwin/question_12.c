// Write a C program to input month number and print number of days in that month.
#include <stdio.h>
void days_in_month(int month);
void main() {
    int month;
    printf("Input a month number: ");
    scanf("%d", &month);
    days_in_month(month);
}
void days_in_month(int month) {
    if (month>=1 && month<=12)
    {
        if (month==1)
        {
            printf("It contains 31 days.");
        }
        else if (month==2)
        {
            printf("It contains 28 or 29 days.");
        } 
        else if (month==3)
        {
            printf("It contains 31 days.");
        }
        else if (month==4)
        {
            printf("It contains 30 days.");
        }
        else if (month==5)
        {
            printf("It contains 31 days.");
        }
        else if (month==6)
        {
            printf("It contains 30 days.");
        }
        else if (month==7)
        {
            printf("It contains 31 days.");
        }
        else if (month==8)
        {
            printf("It contains 31 days.");
        }
        else if (month==9)
        {
            printf("It contains 30 days.");
        }
        else if (month==10)
        {
            printf("It contains 31 days.");
        }
        else if (month==11)
        {
            printf("It contains 30 days.");
        }
        else
        {
            printf("It contains 31 days.");
        }
    }
    else
    {
        printf("There are 12 months in a year");
    }
}