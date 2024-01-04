// qs 30 in video
// Sum of first n natural numbers.
#include<stdio.h>
// recursive function declaration/prototype
int sum(int n);

int main() {
    int n;
    printf("Enter nth number: ");
    scanf("%d", &n);
    // recursive function call
    printf("Sum is %d", sum(n));
    return 0;
}

// recursive function definition
int sum(int n) {
    // base case
    if (n==1) {
        // if n==1 it will return 1 and stop the recursion
        return 1;
    }
    // the function will go down till sum(1) then calculate from the base case to limit case.
    // more briefly explained in notebook with recursion tree.
    int sumNm1 = sum(n-1);
    int sumN = sumNm1 + n;
    return sumN;
}
