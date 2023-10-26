// Write a C program to create Simple Calculator using switch case.
#include <stdio.h>
void calculator(float operand1, char operator, float operand2);
void main() {
    float a, b;
    char symbol;
    printf("Input sample: <number 1> <operator> <number 2>\n");
    scanf("%f%c%f", &a, &symbol, &b);
    calculator(a, symbol, b);
}
void calculator(float operand1, char operator, float operand2) {
    switch (operator)
    {
        case '+':
            printf("%0.2f", operand1+operand2);
            break;
        case '-':
            printf("%0.2f", operand1-operand2);
            break;
        case '*':
            printf("%0.2f", operand1*operand2);
            break;
        case '/':
            printf("%0.2f", operand1/operand2);
            break;
        default:
            printf("Invalid operator");
            break;
    }
}