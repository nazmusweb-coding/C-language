// In an array of numbers, find how many times does a number 'x' occurs.
#include <stdio.h>
void input(int arr[], int arr_len, int *number);
void finder(int arr[], int arr_len, int number);
void main() {
    int len, num;
    printf("Length of array: ");
    scanf("%d", &len);

    int arr[len];
    input(arr, len, &num);
    finder(arr, len, num);
}
void input(int arr[], int arr_len, int *number) {
    for (int i = 0; i < arr_len; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Now enter the number you want to check: ");
    scanf("%d", &(*number));
}
void finder(int arr[], int arr_len, int number) {
    int counter = 0;
    for (int i = 0; i < arr_len; i++)
    {
        if (number==arr[i])
        {
            counter++;
        }
    }
    printf("%d occurs = %d times", number, counter);
}