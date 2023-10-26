// Write a C program to input all sides of a triangle and check whether triangle is valid or not.
#include <stdio.h>
void validity_of_triangle(int first_side, int second_side, int third_side);
void main() {
    int a, b, c;
    printf("Input first side: ");
    scanf("%d", &a);
    printf("Input second side: ");
    scanf("%d", &b);
    printf("Input third side: ");
    scanf("%d", &c);
    validity_of_triangle(a, b, c);
}
void validity_of_triangle(int first_side, int second_side, int third_side) {
    int compare_with_third_side = first_side + second_side;
    int compare_with_second_side = first_side + third_side;
    int compare_with_first_side = second_side + third_side;
    /* Only using if - else */
    if (compare_with_third_side>third_side)
        if (compare_with_second_side>second_side)
            if (compare_with_first_side>first_side)
                printf("Triangle is valid");
            else
                printf("Triangle is not valid");
        else
            printf("Triangle is not valid");
    else
        printf("Triangle is not valid");
}