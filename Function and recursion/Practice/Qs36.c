// qs 34 in video hw with loop
// Write a function to print n terms of the fibonacci sequence.
#include<stdio.h>
// function declaration
int fibonacci(int n);

int main() {
    int n;
    printf("Enter value of n: ");
    scanf("%d", &n);
    n -= 2;
    // function call
    fibonacci(n);
    return 0;
}

//function definition
int fibonacci(int n) {
    int a=0, b=1, c=0, i=1;
    printf("Fibonacci series: %d, %d", 0, 1);
    while (i<=n)
    {
        c = a + b;
        a = b;
        b = c;
        printf(", %d", c);
        i++;
    }
    printf(".");  
}
// i am unable to do this with recursion.
