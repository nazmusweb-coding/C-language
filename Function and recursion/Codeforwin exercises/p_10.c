// Write a C program to find power of any number using recursion.
#include <stdio.h>

double POWER (double a, int b)
{
    if (b==0)
    {
        return 1.00;
    }
    else if (b>0)
    {
        return a * POWER(a, b-1);
    }
    // for negative base(important line)
    else return 1 / POWER(a, -b);
}

int main ()
{
    int power;
    double base;
    printf("Input base: ");
    scanf("%lf", &base);
    printf("Input power: ");
    scanf("%d", &power);
    printf("%.2lf^%d=%.2lf\n", base, power, POWER(base, power));
    return 0;
}