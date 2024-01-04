// Write a function to find square root of a number.
// this program can only calculate integer type number's square root.
// i want to develop it furthermore 
/* I want to calculate float type number's square root */
// Work in progress
#include <stdio.h>

// function declaration/prototype
double input(void);
void sqroot(void);

/* main() is the main function of this code where we will
 implement everything and it is responsible for function
 call and it is the source of main responsible codes */
void main(void) {
    // function call
    sqroot();
}

// function definition

/* input() will take input from  user */
double input(void) {
    double i;
    printf("Enter the number: ");
    scanf("%lf", &i);
    return i;
}

/* sqroot() will calculate the square root of inputed number */
void sqroot(void) {
    // function call
    double j = input();
    double k = 1;
    double l = 1.0;
    /* n must be int for calculating interger type irrational square roots
     like square roots of 2,3,5,6,7,8,10.... */
    int n;
    /* if's block of code will execute only and only if the user inputs a 
     natural number, if the user inputs something else like negative number, 
     character then it will execute else's block of code*/
    if (j>0) {
        while (k*k!=j) {
            k = k+1;
            if (k>j) {
                while (n!=j) {
                    l = l+0.000001;
                    n = (l*l);
                }
                /* here i didnt use conditional because it will always execute 
                 printf() statement */
                /* this printf() statement is inside of a loop so it will execute
                 again and again. now we have to break through the loop after executing
                 the printf() statement once, that's why I'm using break statement for 
                 breaking the loop */
                printf("Square root of %0.0lf: %lf", j, l);               
                break;
            }
        }
        /* if k*k==j it will be printed, if i remove the conditional, 
         if user inputs number (like 2,3,5), the function will print
         both statement without this conditional so this conditional 
         is a must to control the flow of code. */
        if (k*k==j) {
        printf("Square root of %0.0lf: %0.0lf", j, k);
        }
    }
    /* else's block of code will execute if user inputs against the condition,
     it is against the programme's codintion, so else's block of code is for showing error*/
    else {
        printf("You entered invalid input.");
    }
}