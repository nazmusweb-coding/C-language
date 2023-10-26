/*
Write a C program to input electricity unit charges and calculate total electricity bill according to the given condition:
For first 50 units Rs. 0.50/unit
For next 100 units Rs. 0.75/unit
For next 100 units Rs. 1.20/unit
For unit above 250 Rs. 1.50/unit
An additional surcharge of 20% is added to the bill */
// important
#include <stdio.h>
void bill(float unit);
void main() {
    float unit;
    printf("Enter total units consumed: ");
    scanf("%f", &unit);
    bill(unit);
}
void bill(float unit) {
    float charges = 0;
    if (unit>50.0)
    {
        charges = charges + (50 * 0.50);
        unit = unit - 50;
        if (unit>100.0)
        {
            charges = charges + (100 * 0.75);
            unit = unit - 100;
            if (unit>100.0)
            {
                charges = charges + (100 * 1.20);
                unit = unit - 100;
                if (unit>0.0)
                {
                    charges = charges + (unit * 1.50);
                }
            }
            else
            {
                charges = charges + (unit * 1.20);
            }
        }
        else
        {
            charges = charges + (unit * 0.75);
        }
    }
    else
    {
        charges = charges + (unit * 0.50);;
    }
    charges = charges + (charges*0.20);
    printf("Electricity Bill = %0.2fTaka", charges);
}