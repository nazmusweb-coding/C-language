// Make your own pow function
#include<stdio.h>

// function declaration/prototype
double input(void);
double power(double i);

void main(void) {
    // function call
    power(input());
}

// function definition
double input(void) {
    double i;
    printf("Enter the number: ");
    scanf("%lf", &i);
    return i;
}

double power(double i) {
    double power = i*i;
    // type casting
    if (i==(int)i) {
        printf("%d", (int)power);
    }
    else {
        printf("%lf", power);
    }
}