// Write a function named slice, which taken a string & returns a sliced string from index n to m
#include <stdio.h>
void slice(char *string, int slice_starting_point, int slice_ending_point) {
    for (int i = slice_starting_point; i <= slice_ending_point; i++)
        printf("%c", string[i]);
}
int main() {
    char string[100];
    int n, m;
    fgets(string, 100, stdin);
    printf("Slice starting index: ");
    scanf("%d", &n);
    printf("Slice starting index: ");
    scanf("%d", &m);
    slice(string, n, m);
    return 0;
}