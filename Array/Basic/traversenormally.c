// traverse an array normally without using pointer
#include <stdio.h>
void main (void) {
    int marks[10];
    //input
    for (int i = 0; i < 9; i++)
    {
        printf("%d index: ", i);
        scanf("%d", &marks[i]);
    }
    //output
    for (int i = 0; i < 9; i++)
    {
        printf("%d index: %d\n", i, marks[i]);
    }
}