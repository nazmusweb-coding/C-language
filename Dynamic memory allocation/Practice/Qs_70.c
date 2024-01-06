// Allocate memory to store first 5 odd numebers, then reallocate it to store first 6 even number.
#include <stdio.h>
#include <stdlib.h>

int main ()
{
    int *ptr, j=0;

    ptr = (int *)malloc(5*sizeof(int));

    for (int i = 1; i < 10; i++)
    {
        if (i%2!=0)
        {
            ptr[j++]=i;
        }
        
    }
    
    printf("Printing odds:\n");
    for (int i = 0; i < 5; i++)
    {
        printf("%d\n", ptr[i]);
    }

    j = 0;
    ptr = realloc(ptr, 6);

    for (int i = 2; i <= 12; i++)
    {
        if (i%2==0)
        {
            ptr[j++]=i;
        }
        
    }
    
    printf("Printing evens:\n");
    for (int i = 0; i < 6; i++)
    {
        printf("%d\n", ptr[i]);
    }

    free(ptr);
    ptr = NULL;// to avoid dangling pointer

    return 0;
}