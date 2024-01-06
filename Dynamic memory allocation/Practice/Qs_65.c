// Write a program to allocate memory to store 5 prices.

#include <stdio.h>
#include <stdlib.h>

int main ()
{
    float *price;
    price = (float *)malloc(5*sizeof(float));
    price[0] = 100.00;
    price[1] = 182.92;
    price[2] = 342.12;
    price[3] = 234.32;
    price[4] = 154.00;

    for (int i = 0; i < 5; i++)
    {
        printf("%f\n", price[i]);
    }
    
    return 0;
}