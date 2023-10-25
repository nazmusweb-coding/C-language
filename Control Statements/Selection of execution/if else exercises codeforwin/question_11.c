// Write a C program to input week number and print week day.
#include <stdio.h>
void days_in_week(int day);
void main() {
    int day;
    printf("Input a week number: ");
    scanf("%d", &day);
    days_in_week(day);
}
void days_in_week(int day) {
    if (day==1)
    {
        printf("Monday");
    }
    else if (day==2)
    {
        printf("Tuesday");
    }
    else if (day==3)
    {
        printf("Wednesday");
    }
    else if (day==4)
    {
        printf("Thursday");
    }
    else if (day==5)
    {
        printf("Friday");
    }
    else if (day==6)
    {
        printf("Saturday");
    }
    else if (day==7)
    {
        printf("Sunday");
    }
    else
    {
        printf("There are 7 days in a week");
    }
}