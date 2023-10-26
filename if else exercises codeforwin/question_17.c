// Write a C program to find all roots of a quadratic equation.
// important
#include <stdio.h>
#include <math.h>
void roots_of_quadratic_equation(int a, int b, int c);
void main() {
    int a, b, c;
    printf("Input a: ");
    scanf("%d", &a);
    printf("Input b: ");
    scanf("%d", &b);
    printf("Input c: ");
    scanf("%d", &c);
    roots_of_quadratic_equation(a, b, c);
}
void roots_of_quadratic_equation(int a, int b, int c) {
    float first_root, second_root, imaginary;
    float determinant = pow(b, 2)-(4*a*c);
    if (determinant>0.0)
    {
        first_root = (-b + sqrt(determinant))/(2*a);
        second_root = (-b - sqrt(determinant))/(2*a);
        printf("Root1: %0.2f\nRoot2: %0.2f", first_root, second_root);
    }
    else if (determinant==0.0)
    {
        first_root = -b/(2*a);
        second_root = first_root;
        printf("Root1: %0.2f\nRoot2: %0.2f", first_root, second_root);
    }
    else
    {
        first_root = (-b/(2*a));
        second_root = (-b/(2*a));
        imaginary = (sqrt(-determinant))/(2*a);
        printf("Root1: %0.2f + i%0.2f\nRoot2: %0.2f - i%0.2f", first_root, imaginary, second_root, imaginary);
    }
}