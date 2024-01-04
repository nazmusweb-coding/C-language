// Write a C program to find diameter, circumference and area of circle using functions.
#include <stdio.h>
#include <math.h>

double diameter (int r)
{
    return 2*r;
}
double circumference (int r)
{
    return 2*acos(-1)*r;
}
double area (int r)
{
    return acos(-1)*r*r;
}

int main ()
{
    double r;
    printf("Input radius: ");
    scanf("%lf", &r);
    printf("Diameter = %.2lf units\n", diameter(r));
    printf("Circumference = %.2lf units\n", circumference(r));
    printf("Area = %.2lf sq. units\n", area(r));
    return 0;
}