// Passing Structure to function(called by value)
#include <stdio.h>
struct student
{
    char name[20];
    int id;
    float cgpa;
};

void printInfo (struct student s1)
{
    printf("Student Information:\n\n");
    printf("Student name = %s\n", s1.name);
    printf("Student ID   = %d\n", s1.id);
    printf("Student cgpa = %0.3f\n", s1.cgpa);
}

int main ()
{
    struct student s1 = {"Nazmus Sakib", 1287, 4.000};
    printInfo(s1);// fuction call by value
    
    return 0;
}