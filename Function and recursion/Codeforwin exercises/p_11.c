// Write a C program to print all natural numbers between 1 to n using recursion.
#include <stdio.h>

int Print (int a, int b)
{
    if (a==b)
    {
        printf("%d", b);
        return 0;
    }
    printf("%d, ", a);
    Print(a+1, b);
}

int main ()
{
    int a, b;
    printf("Input lower limit: ");
    scanf("%d", &a);
    printf("Input upper limit: ");
    scanf("%d", &b);
    printf("Natural numbers between %d to %d: ", a, b);
    Print(a, b);
    return 0;
}