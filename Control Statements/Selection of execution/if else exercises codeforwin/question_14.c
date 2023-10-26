// Write a C program to input angles of a triangle and check whether triangle is valid or not.
#include <stdio.h>
void validity_of_triangle(int first_angle, int second_angle, int third_angle);
void main() {
    int a, b, c;
    printf("Input first angle: ");
    scanf("%d", &a);
    printf("Input second angle: ");
    scanf("%d", &b);
    printf("Input third angle: ");
    scanf("%d", &c);
    validity_of_triangle(a, b, c);
}
void validity_of_triangle(int first_angle, int second_angle, int third_angle) {
    int total_angle = first_angle + second_angle + third_angle;
    if (total_angle<=180)
    {
        printf("The triangle is valid");
    }
    else
    {
        printf("The triangle is not valid");
    }
}