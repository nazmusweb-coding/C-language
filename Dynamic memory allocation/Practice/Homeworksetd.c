// Search & find out which is better malloc( ) or calloc ( )
#include <stdio.h>
#include <stdlib.h>

int main ()
{
    return 0;
}

/*
    The choice between malloc() and calloc() depends on your specific use case and requirements:

    malloc() allocates uninitialized memory:

    -It takes in the size of the memory block in bytes.
    -The allocated memory is not initialized, meaning it contains garbage values.
    -Use malloc() when you need to allocate memory and don't necessarily require it to be initialized to zero.

    calloc() allocates zero-initialized memory:

    -It takes in the number of elements and the size of each element in bytes.
    -It initializes the allocated memory to zero.
    -Use calloc() when you need the allocated memory to be zero-initialized, such as when working with arrays or structures that should start with all elements set to zero.
    -In terms of performance, there might be negligible differences between malloc() and calloc(), especially for small allocations. However, calloc() might be marginally slower because it initializes memory to zero.

    The choice between malloc() and calloc() often boils down to the necessity of zero-initialized memory. If you don't need zero-initialized memory, malloc() might be a slightly better choice due to its potentially faster allocation speed for larger memory blocks.
*/