// Write a C program to convert Binary to Hexadecimal number system.
// Important 3 star
#include <stdio.h>
#include <string.h>
void inPut(long long *binary);// Function declaration or prototype
int conVert(int digit, int index, long long remains, int *hexa_constant, char *reverse_value, long long binary, long long temp_binary);// Function declaration or prototype

void main()//main function, where it connects the whole code
{
    int hexa_constant[] = {0, 1, 10, 11, 100, 101, 110, 111, 1000, 1001, 1010, 1011, 1100, 1101, 1110, 1111};//array declaration

    /* long long type can't store more than 20 digits*/
    char reverse_value[20];//variable declaration

    /* Intention for taking long long type variables is to contain more and more bytes from user and for accurate calculation */
    long long remains, binary, temp_binary;//variable declaration

    /* Here, digit variable is to check if the input is binary or not and index variable is for storing value in an array */
    int digit, index = 0;//variable declaration

    inPut(&binary);//function call
    conVert(digit, index, remains, hexa_constant, reverse_value, binary, temp_binary);//function call
}

/* This function is for taking input and returning it to main fuction through pointer */
void inPut(long long *binary)//function definition
{
    printf("Input binary number: ");
    scanf("%lld", binary);
}

/* This function is for converting inputed binary number into hexadecimal number */
int conVert(int digit, int index, long long remains, int *hexa_constant,  char *reverse_value, long long binary, long long temp_binary)//function definition
{
    /* I have to work twice with binary variable's value so i assigned it's value in a varibale */
    temp_binary = binary;

    /* This loop will count the digits of inputed value*/
    while (temp_binary>0)
    {
        /* Taking the digit */
        digit = temp_binary%10;
        
        /* Removing the last 1 digit as it is processed */
        temp_binary = temp_binary/10;

        /* It will find if the inputed number is binary or not, if the inputed number(digit) have any other real number exceding 0 and 1, then it is not a binary number, after printing Invalid input it will put an end to the program */
        if (digit<0 || digit>1)
        {
            /* If this block of code is accessed it means inputed number is not a binary number, and this return statement will put an end to the program without further ado */
            printf("Invalid Input");
            return 1;
        }
    }

    /* This loop will calculate the hexadecimal value */
    while (binary>0)
    {
        /* Taking the remains */
        remains = binary%10000;

        /* Removing the last 4 digits as it is processed */
        binary = binary/10000;

        /* This loop will check if the index value of hexa_constant matchs with remains */
        for (int i = 0; i < 16; i++)
        {
            if (hexa_constant[i]==remains)
            {
                /* If i[index value] is less then 10 (0-9) */
                if (i<10)
                {
                    /* It will add i's value with 48 and store char type data in reverse_value[0(if first time)], It is a game of ASCII values */
                    reverse_value[index] = (char)i + 48;
                }
                /* If i[index value] is more than and equal to 10 (10-15) */
                else
                {
                    /* It will subtract 10 from i's value and add 65 to store char type data in reverse_value[0(if first time)], It is a game of ASCII values */
                    reverse_value[index] = (char)i-10 + 65;
                }
                /* It will increase the index value by 1 */
                index++;

                /* Here, break statement will break out of this loop then back to while loop, this break statement is to make the fuction fore efficient */
                break;
            }
        }
    }
    /* This will marks the end of reverse_value string so, this is an important line of this function */
    reverse_value[index] = '\0';

    /* This built-in function will reverse the index values in array */
    strrev(reverse_value);

    /* This is the final statement which will print the calculated hexadecimal value */
    printf("Hexadecimal value = %s", reverse_value);
}