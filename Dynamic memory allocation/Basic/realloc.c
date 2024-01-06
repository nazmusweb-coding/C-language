// reallocate (increase or decrease) memory using the same pointer & size.
#include <stdio.h>
#include <stdlib.h>

int main ()
{
    int *ptr;
    ptr = (int *)malloc(5 * sizeof(int));
    ptr = realloc(ptr, );
}