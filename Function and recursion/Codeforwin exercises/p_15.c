// Write a C program to find reverse of any number using recursion.
#include <stdio.h>
#include <math.h>

int rev (int a)
{
    int digit = log10(a);
    if (a==0)
    {
        return 0;
    }
    else return (a%10 * pow(10, digit)) + rev(a/10);
    
}

int main ()
{
    int a, b;
    scanf("%d", &a);
    printf("Reverse = %d\n", rev(a));
    return 0;
}