// Create a 2D array, storing the tables of 2 & 3.
#include <stdio.h>
void storetable(int arr[][10], int n, int m, int number);
void main() {
    int table[2][10];
    int n, m, number;
    storetable(table, 0, 10, 2);
    storetable(table, 2, 10, 3);
}

void storetable(int arr[][10], int n, int m, int number) {
    for (int i = 0; i < m; i++)
    {
        arr[n][m] = number * (i+1);
        printf("%d\t", arr[n][m]);
    }
    printf("\n");
}