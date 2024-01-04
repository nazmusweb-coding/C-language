// Use library functions to calculate the square of a number given by user.
#include<stdio.h>
// for using pow() funtion to square
#include<math.h>

int main() {
    int n;
    printf("Enter the number: ");
    scanf("%d", &n);
    // pow() returns the accurate if return type is float or double
    double square = 0;
    square = square + pow(n, 2);
    printf("The square of given number: %lf", square);
    return 0;
}