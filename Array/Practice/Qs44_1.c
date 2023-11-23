// another way
#include <stdio.h>
void reverse(int *arr, int n);
void printArr(int arr[], int n);
void main () {
    int arr[] = {1, 2, 3, 4, 5};
    reverse(arr, 5);
    printArr(arr, 5);    
}

void reverse(int *arr, int n) {
    for (int i = 0; i < n/2; i++) {
        int first_value = arr[i];
        int second_value = arr[5-i-1];
        arr[5-i-1] = first_value;
        arr[i] = second_value;
    }
}
void printArr(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d\t", arr[i]);
    }
}