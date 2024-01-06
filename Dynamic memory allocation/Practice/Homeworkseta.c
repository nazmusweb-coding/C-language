// Search about what is a 'dangling pointer' in C.
#include <stdio.h>
#include <stdlib.h>

int main ()
{
    int *sides;
    sides = (int *)malloc(5 *sizeof(int));

    //best practice like file i/o
    if (sides == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &sides[i]);
    }
    for (int i = 0; i < 5; i++)
    {
        printf("%d\n", sides[i]);
    }

    free(sides);
    //sides = NULL;// i can assign null to avoid dangling pointer
    // (without assigning NULL to the pointer)here i am working with dangling pointer which is highly discouraged as it can make my code error-prone and harder to maintain.
    sides = (int *)malloc(10*sizeof(int));
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &sides[i]);
    }
    for (int i = 0; i < 10; i++)
    {
        printf("%d\n", sides[i]);
    }
    // it is a good practice that never use the freed memory even after assigning it a null
    // Allocating memory to a pointer that was previously freed can still lead to unexpected behavior and potentially introduce bugs in your program.
    // In short, never use the pointer after freeing it! because it bcames a dangling pointer after that.
    return 0;
}