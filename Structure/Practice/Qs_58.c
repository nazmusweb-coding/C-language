// Create a structure to store complex number (use arrow operator)
#include <stdio.h>
typedef struct complex
{
    int real;
    char operator;
    int imaginary;
} com;

void scanInfo (com *number)
{
    printf("Real Number: ");
    scanf("%d", &number->real);
    getchar();// cosumes newline character from buffer
    printf("Operator: ");
    scanf("%c", &number->operator);
    printf("Imaginary Number: ");
    scanf("%d", &number->imaginary);
}

void printInfo (com number) 
{
    printf("Complex number: %d%c%di\n", number.real, number.operator, number.imaginary);
}

int main ()
{
    com number1;
    scanInfo(&number1);

    printInfo(number1);

    return 0;
}