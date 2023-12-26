#include <stdio.h>
#include <string.h>
//user defined structure, it has to be writtend outside of main, and on the top
struct student
    {
        char name[100];
        int roll;
        float cgpa;
    };
int main () {
    struct student s1;
    /* We cant assign string type input in structure type variable directly, we have to use strcpy() */
    strcpy(s1.name, "Nazmus Sakib");
    s1.roll = 1287;
    s1.cgpa = 4.00;

    printf("Student Name = %s\n", s1.name);
    printf("Student roll = %d\n", s1.roll);
    printf("Student cgpa = %f\n", s1.cgpa);
    return 0;
}