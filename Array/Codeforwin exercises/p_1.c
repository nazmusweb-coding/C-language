// Write a C program to read and print elements of array.
#include <stdio.h>

int main ()
{
    int size;
    scanf("%d", &size);
    int array[size];
    
    // taking input of array
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &array[i]);
    }

    // printing values of the array
    printf("Output: ");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", array[i]);
    }
    
    return 0;
}