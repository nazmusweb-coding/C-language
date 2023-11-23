// Write a fuction to reverse an array.
#include <stdio.h>
int reverse(int arr[], int n);
void main() {
    int arr[] = {1, 2, 3, 4, 5};
    reverse(arr, 4);
}
int reverse(int arr[], int n) {
    printf("arr[] = { ");
    for (int i = n; i >= 0; i--) {
        printf("%d ", (arr[i])); 
    }
    printf("}");
}