// Allocate memory for 500 integers using calloc & then store first 500 natural numbers in that space.

#include <stdio.h>
#include <stdlib.h>

int main ()
{
    int *numbers;
    numbers = (int *)calloc(500, sizeof(int));

    if (numbers == NULL) {
        fprintf(stderr, "Memory allocation failed\n");
        return 1;
    }

    for (int i = 0; i < 500; i++)
    {
        numbers[i] = i+1;
    }

    for (int i = 0; i < 500; i++)
    {
        printf("%d\n", numbers[i]);
    }

    free(numbers);
    
    return 0;
}