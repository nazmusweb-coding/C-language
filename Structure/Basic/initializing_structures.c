// Initializing Structures
#include <stdio.h>
struct student
{
    char name[20];
    int id;
    float cgpa;
};

int main ()
{
    struct student s1 = {"Nazmus Sakib", 1287, 4.000};//instead of using 3 different line we can initialize it in single line
    printf("Student name: %s\nStudent ID: %d\nStudent CGPA: %0.3f\n", s1.name, s1.id, s1.cgpa);
    return 0;
}