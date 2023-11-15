// Print the value of 'i' from its pointer to pointer

#include <stdio.h>
int input(void);
void pointertopointer(int i);

void main(void) {
    pointertopointer(input());
}

int input(void) {
    int i;
    printf("Enter the value for i: ");
    scanf("%d", &i);
    return i;
}

void pointertopointer(int i) {
    int *ptr = &i;
    //pointer to pointer
    int **pptr = &ptr;
    printf("Value of i: %d", **pptr);
}