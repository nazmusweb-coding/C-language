// Write a fucntion to find the number of odd numbers in an array
#include <stdio.h>
void preInput(int *n);                                             // it will take input for size of array
void inPut(int *arr, int n);                                       // it will take input for each index in an array
void findOdd();                                                   // it is the final function which will caluculate the odd numbers in an array

void main (void) {
    /*  in main function i called the
        final and last function     */
    findOdd(); 
}

void preInput(int *n) {
    printf("Enter the number of input values: ");
    scanf("%d", &(*n));
}

void inPut(int *arr, int n) {
    for (int i = 0; i < n; i++) {
        printf("Enter the numbers: ");
        scanf("%d", &arr[i]);
    }
}

void findOdd() {
    int n;
    preInput(&n);                                                  // called function by pointer, i took input for sizeof array and returned in n variable
    int numbers[n];                                                // sizeof array is decided by user input
    inPut(numbers, n);                                             // called function with number pointer(which represents number[0]) and n argument
    for (int i = 0; i < n; i++) {
        if (numbers[i]%2!=0)
            printf("Odd numbers are(index: %d):  %d\n", i, numbers[i]);
    }
}