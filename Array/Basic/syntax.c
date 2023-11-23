// syntax of array
#include <stdio.h>
void main (void) {
    int marks[3];
    printf("Enterh phy: ");
    scanf("%d", &marks[0]);
    printf("Enterh chem: ");
    scanf("%d", &marks[1]);
    printf("Enterh math: ");
    scanf("%d", &marks[2]);
    printf("phy = %d, chem = %d, math = %d", marks[0], marks[1], marks[2]);

}