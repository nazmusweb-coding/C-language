// Write a function to find sum of digits of a number.
#include <stdio.h>

// function declaration/prototype
int input();
int sumofdigits();

/* main() is the main function of this code where we will
 implement everything and it is responsible for function
 call and it is the source of main responsible codes */
int main() {
    // function call
    sumofdigits();
    return 0;
}

// funtion definition

/* input() will take input from  user */
int input() {
    int i;
    printf("Enter the number: ");
    scanf("%d", &i);
    return i;
}

/* sumofdigits() will calculate the sum of digits from input()*/
int sumofdigits() {
    int n = input();
    int r, sum = 0;
    while (n!=0) {
        r = n%10;
        n = n/10;
        sum = sum + r;
    }
    printf("%d", sum);
}