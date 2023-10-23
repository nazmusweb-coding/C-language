// Write a C program to convert Octal to Binary number system.
// work in progress
// Important
// I cant caluculate for more than 6 or 7 digit this is my weakness here, when i will learn it i wll come back and rewrite it. 
#include <stdio.h>
void inPut(int *octal);// Function declaration or prototype
int conVert(long long binary, int octal, int temp_octal, long long place, int remains, int *binary_constant);// Function declaration or prototype

void main ()//main function, where it connects the whole code
{
    int binary_constant[] = {0, 1, 10, 11, 100, 101, 110, 111};//array declaration
    int octal, temp_octal, remains;//variable declaration

    /* long long type can't store more than 20 digits */
    long long place = 1, binary = 0;

    inPut(&octal);//function call
    conVert(binary, octal, temp_octal, place,  remains, binary_constant);//function call
}

/* This function is for taking input and returning it to main fuction through pointer */
void inPut(int *octal)//function definition
{
    printf("Input octal number: ");
    scanf("%d", octal);
}

/* This function is for converting inputed octal number into binary number and handling errors */
int conVert(long long binary, int octal, int temp_octal, long long place, int remains, int *binary_cosntant)//function definition
{
    /* I have to work twice with octal variable's value so i assigned it's value in a varibale */
    temp_octal = octal;

    /* This loop will loop will handle all the errors */   
    while (temp_octal>0)
    {
        /* This If statement is to handle error(stopping crash and declaring limit) of this program */
        if (temp_octal>1777777)
        {
            /* If this block of code is accessed it means inputed number can crash the program, and this return statement will put an end to the program without further ado */
            printf("ERROR: This code can calculate for maximum 6 or (till 1777777) digit octal number");
            return 1;
        }

        /* Extract the last digit of octal */
        remains = temp_octal % 10;

        /* Removing the last 1 digits as it is processed */
        temp_octal = temp_octal / 10;

        /* This if statement will find, is there any digit that is less than 0 or more than 7 */
        if (remains<0 || remains>7)
        {
            /* If this block of code is accessed it means inputed number can crash the program, and this return statement will put an end to the program without further ado */
            printf("Invalid input");
            return 1;
        }
    }

    /* This loop will calculate actual binary value */
    while (octal>0)
    {
        /* Extract the last digit of octal */
        remains = octal % 10;

        /* Removing the last 1 digits as it is processed */
        octal = octal / 10;
        
        /* Here binary will add the values to maintain accurate position for each octal and it is one of the most important statements */
        binary = binary + (binary_cosntant[remains] * place);

        /* place will increase the size by 1000 everyt time and binary will sum them and get the actual binary and it is one of the most important statements */
        place = place * 1000;
    }

    /* This is the final statement which will print the calculated binary value */
    printf("Binary value = %lld", binary);
}