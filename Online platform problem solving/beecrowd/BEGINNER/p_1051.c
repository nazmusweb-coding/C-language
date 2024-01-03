#include <stdio.h>

/*
 *Function to calculate the tax on his/her salary
 */
int tax (double salary)
{
    double remaining, sum = 0;
    if (salary >= 0 && salary <= 2000)
    {
        printf("Isento\n");
        return 1;
    }
    else if (salary >= 2000.01 && salary <= 3000.00)
    {
        remaining = (salary - 2000.00);
        sum += remaining * 0.08;

    }
    else if (salary >= 3000.01 && salary <= 4500.00)
    {
        remaining = (salary - 2000.00);
        if (remaining > 1000)
        {
            sum += 1000 * 0.08;
            remaining = salary - 3000.00;
            sum += remaining * 0.18;
        }
        else sum += remaining * 0.08;
    }
    else
    {
        remaining = (salary - 2000.00);
        if (remaining > 1000)
        {
            sum += 1000 * 0.08;
            remaining = salary - 3000.00;
            if (remaining > 1500)
            {
                sum += 1500 * 0.18;
                remaining = salary - 4500.00;
                sum += remaining * 0.28;
            }
            else sum += remaining * 0.18;
        }
        else sum += remaining * 0.08;
    }
    printf("R$ %0.2lf\n", sum);

    return 0;
}

int main ()
{
    double salary;
    scanf("%lf", &salary);
    tax(salary);

    return 0;
}