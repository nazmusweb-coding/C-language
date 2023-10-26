// Write a C program to print day of week name using switch case.
#include <stdio.h>
void day_of_week(int day);
void main() {
    int day;
    printf("Input week number(1-7): ");
    scanf("%d", &day);
    day_of_week(day);
}
void day_of_week(int day) {
    switch (day)
    {
        case 1:
            printf("Monday");
            break;
        case 2:
            printf("Tuesday");
            break;
        case 3:
            printf("Wednesday");
            break;
        case 4:
            printf("Thursday");
            break;
        case 5:
            printf("Friday");
            break;
        case 6:
            printf("Saturday");
            break;
        case 7:
            printf("Sunday");
            break;
        default:
            printf("There are 7 days in a week");
            break;
    }
}