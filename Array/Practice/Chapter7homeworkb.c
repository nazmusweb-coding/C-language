// Write a program to print the largest number in an array
#include <stdio.h>
void input(int arr[], int length);
void maximum(int arr[], int length);
void main() {
    int len;
    printf("Length of array: ");
    scanf("%d", &len);

    int arr[len];
    input(arr, len);
    maximum(arr, len);
}
void input(int arr[], int length) {
    printf("Enter array values: \n");
    for (int i = 0; i < length; i++)
    {
        scanf("%d", &arr[i]);
    }    
}
void maximum(int arr[], int length) {
    for (int i = 0; i < length; i++)
    {
        if (arr[i]>arr[i+1])
        {
            arr[i+1] = arr[i];
        }
        
    }
    printf("Maximum: %d", arr[length-1]);
}