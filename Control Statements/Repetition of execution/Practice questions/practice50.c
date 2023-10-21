// Write a C program to find two’s complement of a binary number.
#include <stdio.h>
#include <string.h>
void inPut(char *binary, int *count);
void onesComplement(int count, char *binary, char *onescomplement);
int twosComplement(int count, char *onescomplement, char *twoscomplement, char *case1);
void handleError(int count, char *case1);
/* This main function is the place where all variables and functions will be declared and called */
void main () {
    /* Declared all type of variable what i do need*/
    int count;
    char binary[1000], onescomplement[1000], twoscomplement[1000], case1[1000];
    /* Called functions with arguments */
    inPut(binary, &count);
    onesComplement(count, binary, onescomplement);
    handleError(count, case1);
    twosComplement(count, onescomplement, twoscomplement, case1);
}
/* For taking input and counting the length of the inputed binary number */
void inPut(char *binary, int *count) {
    printf("\n\n\nWelcome to a program which can calculate 1-999 bit two's complement\n\n");
    printf("Input binary number: ");
    scanf("%s", binary);
    *count = strlen(binary);
}
/* It will calculate the ones complement for inputed binary number */
void onesComplement(int count, char *binary, char *onescomplement) {
    for (int i = 0; i < count; i++) {
        if (binary[i]=='1') {
            onescomplement[i]='0';
        }
        else if (binary[i]=='0') {
            onescomplement[i]='1';
        }
        else {
            printf("Invalid input");
            break;
        }
    }
    onescomplement[count] = '\0';   
}
/* This function will calculate the twos complement for inputed binary number */
int twosComplement(int count, char *onescomplement, char *twoscomplement, char *case1) {
    if (strcmp(onescomplement, case1)==0) {
        printf("Twos complement = 0");
        /* For exiting from this function */
        return 1;
    }
    /* This loop will assign onescomplement's array values into twoscomplement array */
    for (int i = 0; i < count; i++) {
        twoscomplement[i]=onescomplement[i];
    }
    /* This loop will run backward from inputed binary number's length till zero and calculate twos complement in actual*/  
    while (count>0) {
        if (onescomplement[count]=='0') {
            twoscomplement[count]='1';
            break;
        }
        else if (onescomplement[count]=='1') {
            twoscomplement[count]='0';
        }
        count--;     
    }
    /* This will marks the end of twoscomp string */
    twoscomplement[-1] = '\0';
    printf("Twos complement = %s", twoscomplement);
}
/* This fucntion is for suppressing corner cases, which can prove that my program is accurate */
void handleError(int count, char *case1) {
    for (int i = 0; i < count; i++) {
        case1[i]='1';
    }
    case1[count] = '\0';
}