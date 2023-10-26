// Write a C program to check whether a number is positive, negative or zero using switch case.
// interesting
#include <stdio.h>
void kind_of_number(int number);
void main() {
    int n;
    printf("Input number: ");
    scanf("%d", &n);
    kind_of_number(n);
}
void kind_of_number(int number) {
    switch (number>0)
    {
        case 0:
            switch (number<0)
            {
                case 0:
                    printf("%d is zero", number);
                    break;
                case 1:
                    printf("%d is negative", number);
                    break;
            }
            break;
        case 1:
            printf("%d is positive", number);
            break;
    }
}