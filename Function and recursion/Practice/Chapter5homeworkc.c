// Write a fucntion to print "Hot" or "Cold" depend on the temperature user enters.
#include<stdio.h>

// function declaration/prototype
double input(void);
double analysing(double t);

void main() {
    // function call
    analysing(input());
}

// function definition
double input(void) {
    double i;
    printf("Enter the temperature: ");
    scanf("%lf", &i);
    return i;
}
double analysing(double t) {
    if (t<=8.0) {
        printf("Temperature: %0.1lf\nAnalysis   : Cold", t);
    }
    else if (t>=32.0)
        printf("Temperature: %0.1lf\nAnalysis   : Hot", t);
    else {
        printf("Temperature: %0.1lf\nAnalysis   : Neither cold nor hot", t);
    }
}
