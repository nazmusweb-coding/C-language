/*  int arr[] = {1, 2, 3, 4, 5} For the given array,
    what will the following give?
    a. *(arr+2)
    b. *(arr+5) */
#include <stdio.h>
void main(void) {
    int arr[] = {1, 2, 3, 4, 5};
    printf("%d\n", *(arr+2));
    printf("%d", *(arr+5)); // error, because it means arr[5] and it isn't assigned
}
/*  so answer for 
    a. *(arr+2) = *(arr[0+2]) = *(arr[2]) = 3
    
    so answer for 
    b. *(arr+5) = *(arr[0+5]) = *(arr[5]) = error
    because
    arr[0] = 1
    arr[1] = 2
    arr[2] = 3
    arr[3] = 4
    arr[4] = 5
    arr[5] = not assigned 
    since arr[5] is not assigned so
    hence it doesn't have any value     */