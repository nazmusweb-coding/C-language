// Write a C program to print all even or odd numbers in given range using recursion.
#include <stdio.h>

int Print (int a, int b)
{
    if (a>b)
    {
        return 0;
    }
    printf("%d ", a);
    Print(a+2, b);
}

int main ()
{
    int a, b;
    printf("Input lower limit: ");
    scanf("%d", &a);
    printf("Input upper limit: ");
    scanf("%d", &b);
    printf("Even/odd numbers between %d to %d: ", a, b);
    Print(a, b);
    return 0;
}