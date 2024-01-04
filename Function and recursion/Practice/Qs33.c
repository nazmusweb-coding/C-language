// qs 31 in video
// Factorial of n.
#include <stdio.h>
// recursive function declaration/prototype
int factorial(int n);

int main() {
    int n;
    printf("Enter value of n: ");
    scanf("%d", &n);
    // recursive function call
    printf("Factorial of %d is: %d", n, factorial(n));
    return 0;
}

// recursive function definition
// same function as sum of n natural numbers.
int factorial(int n) {
    // base case
    if (n==1) {
        return 1;
    }
    // storing looped value in integer type intfactorial_var named variable
    int factorial_var = factorial(n-1);
    // storing multiplication value of n value with factorial_var value in every loop in integer type infactorial_var_final named variable
    int factorial_var_final = factorial_var * n;
    return factorial_var_final;
}