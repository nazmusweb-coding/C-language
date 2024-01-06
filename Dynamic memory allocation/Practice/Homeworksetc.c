// Search about what is 'memory leak' in C.
#include <stdio.h>
#include <stdlib.h>

int main ()
{
    // basically not freeing the allocated memory is called memory leak
    // freeing it twice can be also issue
    // assiging anything can also be cause to memory leak like ptr = NULL it will lose reference
    return 0;
}
/*
    A memory leak in C occurs when memory that has been dynamically allocated (using functions like malloc, calloc, or realloc)
    is not properly deallocated or freed when it's no longer needed. As a result, the allocated memory becomes inaccessible and
    unusable by the program, but it's not returned to the system, causing a gradual reduction in available memory.

*/