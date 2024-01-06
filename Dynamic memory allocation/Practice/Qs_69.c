// Create an array of size 5 (using calloc) & enter it's values from the user.
#include <stdio.h>
#include <stdlib.h>

int main ()
{
    int *ptr, n;

    // memory allocation
    ptr = (int *)calloc(5, sizeof(int));

    printf("Enter values:\n");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &ptr[i]);
    }

    //printing the values
    for (int i = 0; i < 5; i++)
    {
        printf("value %d is %d\n", i, ptr[i]);
    }
    
    
    free(ptr);

    return 0;
}