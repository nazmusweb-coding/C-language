#include <stdio.h>
/* takes input for number of elements in the array */
void preInput(int *n) {
    scanf("%d", &(*n));
}
/* takes input of index value of the array*/
int input(int n, int *arr) {
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        if (arr[i]<1 && arr[i]>1000) return 1;
    }
    return 0;
}
/* calculation and variables are here */
int arr_sum() {
    int number_of_elements;
    preInput(&number_of_elements);
    int arr[number_of_elements];
    if (number_of_elements<1 || number_of_elements>1000) return 1;
    input(number_of_elements, arr);
    int sum = 0;
    for (int i = 0; i < number_of_elements; i++) {
        sum = sum + arr[i];
    }
    printf("%d", sum);
    return 0;
}
int main() {
    arr_sum();
    return 0;
}