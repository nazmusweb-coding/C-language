#include<stdio.h>
// funtion declaration/prototype
int fibonacci(int n);

int main() {
    int n;
    scanf("%d", &n);
    // function call
    printf("%d\n",fibonacci(n));
    return 0;
}

// recursive function definition
int fibonacci(int n) {
    // base case for n-1
    if (n==0) {
        return 0;
    }
    // base case for n-2
    if (n==1) {
        return 1;
    }
    /* storing fibonacci(n-1) value in
     fiboNm1 variable */
    int fiboNm1 = fibonacci(n-1);
    /* storing fibonacci(n-2) value
     in fiboNm2 variable */
    int fiboNm2 = fibonacci(n-2);
    /* adding fibonacci(n-1) and fibonacci(n-2)
     value together in fiboN value */
    int fiboN = fiboNm1 + fiboNm2;
    /* returning the
     last value of fiboN */
    return fiboN;
}