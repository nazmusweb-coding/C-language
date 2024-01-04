// Write a C program to find sum of all even or odd numbers in given range using recursion.
#include <stdio.h>

int sum (int a, int b)
{
    if (a>b)
    {
        return 0;
    }
    return a + sum(a+2, b);
    
}

int main ()
{
    int a, b;
    printf("Input lower limit: ");
    scanf("%d", &a);
    printf("Input upper limit: ");
    scanf("%d", &b);
    printf("Sum of even/odd numbers in between %d to %d = %d", a, b, sum(a, b));
    return 0;
}