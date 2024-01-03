// Snack is one of the real life problems, billing system
#include <stdio.h>

void snack (int, int);

int main ()
{
    int X, Y;
    scanf("%d%d", &X, &Y);
    snack(X, Y);

    return 0;
}

void snack (int CODE, int Quantity)
{
    switch (CODE)
    {
    case 1:
        printf("Total: R$ %0.2lf\n", 4.00*Quantity);
        break;
    case 2:
        printf("Total: R$ %0.2lf\n", 4.50*Quantity);
        break;
    case 3:
        printf("Total: R$ %0.2lf\n", 5.00*Quantity);
        break;
    case 4:
        printf("Total: R$ %0.2lf\n", 2.00*Quantity);
        break;
    case 5:
        printf("Total: R$ %0.2lf\n", 1.50*Quantity);
        break;
    default:
        break;
    }
}