// Allocate memory for 5 numbers. Then dynamically increase it to 8 numbers.
#include <stdio.h>
#include <stdlib.h>

int main ()
{
    int *ptr;

    ptr = (int *)calloc(5, sizeof(int));

    // to check how many memory has been allocated
    printf("Enter 5 numbers:\n");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &ptr[i]);
    }

    printf("END\n");

    ptr = realloc(ptr, 8);

    // to check how many memory has been re allocated
    printf("Enter 8 numbers:\n");
    for (int i = 0; i < 8; i++)
    {
        scanf("%d", &ptr[i]);
    }

    // later on printing the latest input taken after memory re allocation
    for (int i = 0; i < 8; i++)
    {
        printf("Number %d is %d\n", i, ptr[i]);
    }
    
    free(ptr);
}