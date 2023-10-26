// Write a C program to check whether the triangle is equilateral, isosceles or scalene triangle.
#include <stdio.h>
void kind_of_triangle(int first_side, int second_side, int third_side);
void main() {
    int a, b, c;
    printf("Input first side: ");
    scanf("%d", &a);
    printf("Input second side: ");
    scanf("%d", &b);
    printf("Input third side: ");
    scanf("%d", &c);
    kind_of_triangle(a, b, c);
}
void kind_of_triangle(int first_side, int second_side, int third_side) {
    /* Only using if - else */
    if (second_side+third_side>first_side)
    {
        if (first_side+third_side>second_side)
        {
            if (first_side+second_side>third_side)
            {
                if (first_side==second_side)
                {
                    if (second_side==third_side)
                    {
                        printf("Triangle is equilateral triangle");
                    }
                    else
                    {
                        printf("Triangle is isosceles triangle");
                    }
                }
                else if (second_side==third_side)
                {
                    printf("Triangle is isosceles triangle");
                }
                else
                {
                    printf("Triangle is scalene triangle");
                }
            }
            else
            {
                printf("Triangle is not valid");
            }
        }
        else
        {
            printf("Triangle is not valid");
        }
    }
    else
    {
        printf("Triangle is not valid");
    }
}