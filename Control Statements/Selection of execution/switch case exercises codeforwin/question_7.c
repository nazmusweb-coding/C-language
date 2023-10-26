// Write a C program to find roots of a quadratic equation using switch case.
// important
#include <stdio.h>
#include <math.h>
void roots(int a, int b, int c);
void main() {
    int a, b, c;
    printf("Input a: ");
    scanf("%d", &a);
    printf("Input b: ");
    scanf("%d", &b);
    printf("Input c: ");
    scanf("%d", &c);
    roots(a, b, c);
}
void roots(int a, int b, int c) {
    float D = (pow(b, 2) - (4*a*c));
    float root1, root2, imaginary;
    switch (D>0)
    {
        case 0:
            /* If discriminant is not positive */
            switch (D<0)
            {
                case 0:
                    /* If discriminant is zero */
                    root1 = -b/(2*a);
                    root2 = root1;
                    printf("ROOT1 = %0.2f\nROOT2 = %0.2f", root1, root2);
                    break;
                case 1:
                    /* If discriminant is negative */
                    root1 = -b/(2*a);
                    root2 = root1;
                    imaginary = sqrt(-D)/(2*a);
                    printf("ROOT1 = %0.2f + i%0.2f\nROOT2 = %0.2f - i%0.2f", root1, imaginary, root2, imaginary);
            }
            break;
        case 1:
            /* If discriminant is positive */
            root1 = (-b+sqrt(D))/(2*a);
            root2 = (-b-sqrt(D))/(2*a);
            printf("ROOT1 = %0.2f\nROOT2 = %0.2f", root1, root2);
            break;
    }
}