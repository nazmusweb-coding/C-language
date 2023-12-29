// 2 numbers - a & b, are written in a file. Write a program to replace them with their sum.
#include <stdio.h>

int main ()
{
	FILE *fptr;
    //opened file in read only mode
	fptr = fopen("Qs_64.txt", "r");
	
	int a, b;

    //read values from file
	fscanf(fptr, "%d", &a);
	fscanf(fptr, "%d", &b);

    //closed file
    fclose(fptr);

    //opened file in write only mode
    fptr = fopen("Qs_64.txt", "w");

    //write values in file
	fprintf(fptr, "%d", a+b);

    //closed file
	fclose(fptr);

	return 0;
}