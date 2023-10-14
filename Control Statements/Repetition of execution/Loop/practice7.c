// Print the factorial of a number n.
#include<stdio.h>
int main() {
    int n;
    int factorial = 1;
    printf("Enter value of n: ");
    scanf("%d", &n);
    for (int i = 1; i<=n; i++) {
        factorial = factorial * i;                  // multiplying each number with total multiplied value in each loop [5!= 1x2x3x4x5].
    }
    printf("Factorial of %d : %d", n, factorial);
}