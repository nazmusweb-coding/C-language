// Write a C program to check whether a number is Armstrong number or not.
#include <stdio.h>
// function declaration/prototype
void inPut(int *n);
void armStrong(int a, int b, int c, int temp);
void main () {
    int a, b, c=0, temp;
    // function call
    inPut(&a); // returned inputed value through pointer into main function
    temp = a; // a variable's value will be working in a loop so it's value will change thats why i assigned a in a temp variable before going into loop to keep record of real value of a(user input)
    armStrong(a, b, c, temp);
}
// fucntion definition
void inPut(int *n) {
    printf("Input number: ");
    scanf("%d", &(*n));
} 
void armStrong(int a, int b, int c, int temp) {
    while (a>0) {
        b = a%10;
        c = c + (b*b*b);
        a = a/10;
    }
    if (temp == c) // if the user input and inputed number's each digit's cube sum is equal then its an armstrong number
        printf("%d is armstrong number", temp);
    else
        printf("%d is not an armstrong number", temp);
}