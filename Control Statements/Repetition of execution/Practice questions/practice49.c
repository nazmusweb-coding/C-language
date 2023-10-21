// Write a C program to find one’s complement of a binary number.
// work in progress.
// because i want to customize the index lenth of arrays, but i dont how to do it.
// when i will learn how to do that, i will come back and update the code.
#include <stdio.h>
#include <string.h>
void inPut(char *binary);
char comPlement(int count, int error, char *binary, char *complement);

void main () {
    int error = 0, count;
    char binary[1000], onescomplement[1000];
    inPut(binary);
    count = strlen(binary);
    printf("%s", binary);
    comPlement(count, error, binary, onescomplement);
}
void inPut(char *binary) {
    printf("Welcome to a program which can calculate 1-999 bit one's complement\n\n");
    printf("Input binary number: ");
    scanf("%s", binary);
}

char comPlement(int count, int error, char *binary, char *onescomplement) {
    for (int i = 0; i < count; i++) {
        if (binary[i]=='1') {
            onescomplement[i]='0';
        }
        else if (binary[i]=='0') {
            onescomplement[i]='1';
        }
        else {
            printf("Invalid input");
            error = 1; 
            break; // Exits from loop
        }     
    }
    onescomplement[count] = '\0'; // Marks the end of onescomplement string
    if (error==0) { // Check if there are binary string that contains no error
        printf("Original Binary = %s\n", binary);
        printf("Ones complement = %s", onescomplement);
    }  
}