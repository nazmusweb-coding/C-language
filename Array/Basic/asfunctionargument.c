// Arrays as function argument
#include <stdio.h>
void printNumbers(int arr[], int n);// Way 1 -square brackets
void printNumbers2(int *arr, int n);// Way 2 -pointers

void main() {
    int arr[] = {1, 2, 3, 4, 5, 6};
    printNumbers(arr, 6);
    /*  arr[0] itself is a pointer(it has it's own index number included
        so it doenst need any ampersand to locate its memory location) 
        which represents arr    */
    printNumbers2(arr, 6);
}
// Way 1 -square brackets
void printNumbers(int arr[], int n) {
    for (int i = 0; i<n; i++) {
        printf("%d \t", arr[i]);
    }
    printf("\n");
}
// Way 2 -pointers
void printNumbers2(int *arr, int n) {
    for (int i = 0; i<n; i++) {
        printf("%d \t", arr[i]);
    }
}
