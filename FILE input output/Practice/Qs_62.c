// Make a program to input student information from a user & enter it to a file.
#include <stdio.h>

int main ()
{
    //file pointer declaration
    FILE *fptr;

    //file opening
    fptr = fopen("Qs_62.txt", "w");

    char name[20];
    int age;
    float cgpa;

    //taking input from user
    printf("Enter name: ");
    scanf("%s", name);
    printf("Enter age: ");
    scanf("%d", &age);
    printf("Enter cgpa: ");
    scanf("%f", &cgpa);

    //writing the file
    fprintf(fptr, "Student name: %s\n", name);
    fprintf(fptr, "Student age : %d\n", age);
    fprintf(fptr, "Student cgpa: %0.3f\n", cgpa);

    //closing file
    fclose(fptr);


    return 0;
}