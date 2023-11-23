// Write a fucntion to count the number of odd numbers in an array
#include <stdio.h>
int countOdd(int arr[], int n);

void main() {
    int numbers[] = {1, 2, 3, 4, 5, 6, 7};
    printf("Counted odd is: %d", countOdd(numbers, 7));
}

int countOdd(int arr[], int n) {
    int count = 0;
    for (int i = 0; i < n; i++) {
        if ( arr[i] % 2 != 0) {
            count++;
        }
    }
    return count;
}