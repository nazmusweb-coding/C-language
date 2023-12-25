#include <stdio.h>

int sum (int first_operand, int second_operand)
{
    return first_operand + second_operand;
}

int main ()
{
    int a, b;
    scanf("%d%d", &a, &b);

    printf("Sum: %d", sum(a, b));//function with arguments and returns value


    return 0;
}