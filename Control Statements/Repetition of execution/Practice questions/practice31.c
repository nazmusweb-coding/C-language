// Write a C program to enter a number and print it in words.
// work in progress
#include <stdio.h>
#include <math.h>
void main (void) {
    int n, x, num = 0, digit;
    printf("Input number: ");
    scanf("%d", &n);
    digit = (int)log10(n);
    while (n>0) {
        num = (num*10)+(n%10);
        n = n/10;
    }
    digit = digit - ((int)log10(num));
    while (num>0) {
        x = num%10;
        num = num/10;
        switch (x) {
        case 0: printf("Zero ");
            break;
        case 1: printf("One ");
            break;
        case 2: printf("Two ");
            break;
        case 3: printf("Three ");
            break;
        case 4: printf("Four ");
            break;
        case 5: printf("Five ");
            break;
        case 6: printf("Six ");
            break;
        case 7: printf("Seven ");
            break;
        case 8: printf("Eight ");
            break;
        case 9: printf("Nine ");
            break;
        default:
            break;
        }
    }
    while (digit) {
        printf("Zero ");
        digit--;
    }
    
}