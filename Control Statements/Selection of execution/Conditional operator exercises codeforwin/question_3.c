// Write a C program to check whether a number is even or odd using conditional operator.
#include <stdio.h>
void find_even_or_odd(int n);
void main() {
    int n;
    printf("Input a number: ");
    scanf("%d", &n);
    find_even_or_odd(n);
}
void find_even_or_odd(int n) {
    (n%2==0)? printf("%d is Even.", n): printf("%d is Odd.", n);
}