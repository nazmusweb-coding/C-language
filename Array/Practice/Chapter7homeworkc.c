// Write a program to insert an element at the end of an array
#include <stdio.h>
void main() {
    int size;
    printf("Length of array: ");
    scanf("%d", &size);
    int arr[size];

    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
    
    size = size+1;
    printf("Enter the last element of array: ");
    scanf("%d", &arr[size-1]);
    for (int i = 0; i < size; i++)
    {
        printf("%d", arr[i]);
    }
}