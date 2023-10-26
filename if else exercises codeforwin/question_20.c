/*
Write a C program to input basic salary of an employee and calculate its Gross salary according to following:
Basic Salary <= 10000 : HRA = 20%, DA = 80%
Basic Salary <= 20000 : HRA = 25%, DA = 90%
Basic Salary > 20000 : HRA = 30%, DA = 95%  */
#include <stdio.h>
void gross_salary(float basic);
void main() {
    float basic;
    printf("Input basic salary of an employee: ");
    scanf("%f", &basic);
    gross_salary(basic);
}
void gross_salary(float basic) {
    float da, hra, gross = 0;
    if (basic<=10000)
    {
        da = basic * 0.8;
        hra = basic * 0.2;
    }
    else if (basic<=20000)
    {
        da = basic * 0.9;
        hra = basic * 0.25;
    }
    else if (basic>20000)
    {
        da = basic * 0.95;
        hra = basic * 0.3;
    }
    gross = basic + da + hra;
    printf("Gross salary = %0.2f", gross);
}