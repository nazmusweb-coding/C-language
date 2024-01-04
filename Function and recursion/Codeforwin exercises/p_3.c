// Write a C program to find maximum and minimum between two numbers using functions.
#include <stdio.h>
#include <stdlib.h>

int max (int a, int b)
{
    return (a+b+abs(a-b))/2;
}

int min (int a, int b)
{
    return (a+b-abs(a-b))/2;
}

int main ()
{
    int a, b;
    printf("Input two numbers: ");
    scanf("%d%d", &a, &b);
    printf("Maximum = %d\n", max(a, b));
    printf("Minimum = %d\n", min(a, b));
    return 0;
}