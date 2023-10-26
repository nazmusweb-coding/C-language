// Write a C program to convert Binary to Octal number system.
// work in progress
// important
#include <stdio.h>
void inPut(long long *binary);
void coNvert(char *octal_constant, long long binary, long long octal, int digit, int place);

void main () {
    char octal_constant[] = {0, 1, 10, 11, 100, 101, 110, 111};
    long long binary, octal = 0;
    int digit, place = 1; 
    inPut(&binary);
    coNvert(octal_constant, binary, octal, digit, place);
}
void inPut(long long *binary) {
    printf("Input binary number: ");
    scanf("%lld", binary);
}
void coNvert(char *octal_constant,long long binary, long long octal, int digit, int place) {
    while (binary!=0) {
        digit = binary % 1000;
        for (int i = 0; i < 8; i++)
        {
            if (octal_constant[i]==digit)
            {
                octal = (i*place) + octal;
                break;
            }
        }
        binary = binary/1000;
        place = place * 10;
    }
    printf("Octal number: %lld", octal);
}