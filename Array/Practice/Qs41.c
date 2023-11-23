// Write a program to enter price of 3 items & print their final cost with gst.
#include <stdio.h>
void main (void) {
    // declared float type variable's array with three memory location for accurate calculation
    float price[3];
    float final_cost;
    printf("Enter the values of your items one by one: ");
    scanf("%f%f%f", &price[0], &price[1], &price[2]);
    price[0] = price[0] + price[0]*0.18;
    price[1] = price[1] + price[1]*0.18;
    price[2] = price[2] + price[2]*0.18;
    final_cost = price[0] + price[1] + price[2];
    printf("Final cost with gst: %f", final_cost);
}