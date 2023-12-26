// Passing Structure to function(called by reference)
#include <stdio.h>
struct student
{
    char name[20];
    int id;
    float cgpa;
};

void printInfo (struct student *s1)
{
    printf("Student Information:\n\n");
    printf("Student name = %s\n", s1->name);
    printf("Student ID   = %d\n", s1->id);
    printf("Student cgpa = %0.3f\n", s1->cgpa);

    s1->id = 1280;// we can change value of main source if called by reference like normal variables we do
}

int main ()
{
    struct student s1 = {"Nazmus Sakib", 1287, 4.000};
    printInfo(&s1);// fuction call by reference

    printf("Student ID   = %d\n", s1.id);// the id paramenter's value will be changed

    return 0;
}