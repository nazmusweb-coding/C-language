// Write a C program to convert Binary to Decimal number system.
// Work in progress
// I want to make this program capable of taking more length of binary number from user.

#include <stdio.h>
#include <math.h>
void inPut(long long *binary);// Funtion declaration or prototype
int conVert(int count, long long a, long long temp_binary, long long remain, long long place_value, long long sum, long long binary);// Funtion declaration or prototype

void main ()//main function, where it connects the whole code
{
    /* Intention for taking long long type variables is to contain more and more bytes from user and for accurate calculation */
    long long a, temp_binary, remains, place_value, sum = 0, binary;//variable declaration
    int count = 0;//variable declaration
    inPut(&binary);//function call
    conVert(count, a, temp_binary, remains, place_value, sum, binary);//function call
}

/* This function is for taking input and returning it to main fuction through pointer */
void inPut(long long *binary)//function definition
{
    /* This is for declaring capability of this whole program */
    printf("\nThis program is capable of calculating decimal value for maximum 20digit length binary number\n\n");

    printf("Input binary number: ");
    scanf("%lld", binary);
}

/* This function is for converting inputed binary number into decimal number */
int conVert(int count, long long a, long long temp_binary, long long remains, long long place_value, long long sum, long long binary)//function definition
{
    /* I have to work twice with binary variable's value so i assigned it's value in a varibale */
    temp_binary = binary;

    /* This loop will count the digits of inputed value*/
    while (binary>0)
    {
        a = binary%10;

        /* It will find if the inputed number is binary or not, if the inputed number have any other real number exceding 0 and 1, then it is not a binary number, after printing Invalid input it will put an end to the program */
        if (a<0 || a>1) {
            printf("Invalid Input");
            return 1;
        }
        count = count + 1;
        binary = binary/10;
    }

    /* This loop will calculate the decimal value, here i is for running loop and j is for tracking position */
    for (int i = count-1, position = 0; i >= 0, position < count ; i--, position++)
    {
        /* taking the remains */
        remains = temp_binary%10;
        temp_binary = temp_binary/10;

        /* 2^0(position) x 1(remain) = 1*/
        place_value = pow(2, position) * remains;

        /* It will calculate the total of all place values */
        sum = sum + place_value;
    }

    /* This is the final statement which will print the calculated decimal value */
    printf("Decimal value: %lld", sum);   
}