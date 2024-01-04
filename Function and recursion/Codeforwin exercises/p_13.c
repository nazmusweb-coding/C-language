// Write a C program to find sum of all natural numbers between 1 to n using recursion.
#include <stdio.h>

int sum (int a, int b)
{
    if (a==b)
    {
        return b;
    }
    else return a + sum(a+1, b);

}

int main ()
{
    int a, b;
    printf("Input lower limit: ");
    scanf("%d", &a);
    printf("Input upper limit: ");
    scanf("%d", &b);
    printf("Sum of natural numbers from %d to %d = %d\n", a, b, sum(a, b));
    return 0;
}