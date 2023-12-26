// Pointers to structures
#include <stdio.h>
struct student
{
    char name[20];
    int id;
    float cgpa;
};

int main ()
{
    // showing pointer use with sturctures with 2 students
    struct student s1 = {"Nazmus Sakib", 1287, 4.000};
    struct student s2 = {"Sadachan", 1280, 3.120};
    
    struct student *ptr2, *ptr = &s1;
    ptr2 = &s2;

    printf("ID:%d\n", (*ptr).id);// we have to keep '*' in between first bracket
    printf("ID:%d\n", (*ptr2).id);

    return 0;
}