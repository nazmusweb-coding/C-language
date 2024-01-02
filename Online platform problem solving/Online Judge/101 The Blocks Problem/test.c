#include <stdio.h>
#include <string.h>
int initialization(char arr[][1], int n) {
    for (int i = 0; i < n; i++)
    {
        arr[i][0] = i;
    }
}
int add(char arr[][1], char a) {
    strcat(arr[1][0], a);
    puts(arr[1][0]);
}
int main() {
    int n;
    char a;
    scanf("%d", &n);
    char arr[n][1];
    scanf("%c", a);
    initialization(arr[n][1], n);
    add(arr[n][1], a);
}