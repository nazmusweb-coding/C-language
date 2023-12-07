// Write a C program to print all negative elements in an array.
#include <stdio.h>
#define size 100

int main ()
{
    int n, array[size];
    printf("Enter the size of array: ");
    scanf("%d", &n);

    // taking input of the array
    printf("Input array:\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);
    }
    
    // printing values of the array
    printf("Output: ");
    for (int i = 0; i < n; i++)
    {
        if (array[i]<0) printf("%d ", array[i]);
    }
    
    return 0;
}