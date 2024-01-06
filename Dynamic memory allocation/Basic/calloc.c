// syntax of calloc() - continuous allocation
// we have to include stdlib.h
#include <stdio.h>
#include <stdlib.h>

int main ()
{
    float *ptr;
    // important !! notice calloce use , coma and malloc use * astar sign
    ptr = (float *) calloc(5, sizeof(float));//syntax

    for (int i = 0; i < 5; i++)
    {
        printf("%f\n", ptr[i]);
    }
    
}

/* calloc return number of location and malloc returns number of bytes 
    callocs initializes every location with zero, 
    malloc does init locations with zero sometimes but its not 100% sure
    so when every we want to allocate memory and also initialize them with zero
    we better use calloc.
*/