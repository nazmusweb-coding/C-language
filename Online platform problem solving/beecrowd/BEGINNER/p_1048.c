#include <stdio.h>

/*
 *Function to calculate the new salary, increased amount, and readjustment rate
 *Returns 0 on success, 1 on error
 */
int increase (double a)
{
    double new_salary, salary_increased, percentage;

    // it will detect negative and non numerical input
    if (a < 0.0 || a!=(double)a)
    {
        return 1;
    }
    
    if (a >= 0 && a <= 400.0)
    {
        percentage = 0.15;
        new_salary = a + a * percentage;
        salary_increased = a * percentage;
    }
    else if (a > 400.0 && a <= 800.0)
    {
        percentage = 0.12;
        new_salary = a + a * percentage;
        salary_increased = a * percentage;
    }
    else if (a > 800.0 && a <= 1200.0)
    {
        percentage = 0.1;
        new_salary = a + a * percentage;
        salary_increased = a * percentage;
    }
    else if (a > 1200.0 && a <= 2000.0)
    {
        percentage = 0.07;
        new_salary = a + a * percentage;
        salary_increased = a * percentage;
    }
    else
    {
        percentage = 0.04;
        new_salary = a + a * percentage;
        salary_increased = a * percentage;
    }
    printf("Novo salario: %0.2lf\n", new_salary);
    printf("Reajuste ganho: %0.2lf\n", salary_increased);
    printf("Em percentual: %0.0lf %%\n", percentage * 100);
    
    return 0;
}
 
int main ()
{
    double salary;
    scanf("%lf", &salary);
    increase(salary);
 
    return 0;
}