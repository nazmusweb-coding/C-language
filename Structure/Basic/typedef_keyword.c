// Typedef Keyword
#include <stdio.h>
typedef struct student
{
    char name[100];
    int id;
    float cgpa;
} stu;// it is alias of struct student, we made it using typedef

void printInfo (stu student)
{
    printf("Student Information:\n\n");
    printf("Student name: %s\n", student.name);
    printf("Student id  : %d\n", student.id);
    printf("Student cgpa: %0.3f\n", student.cgpa);
}

int main ()
{
    stu s1 = {"Nazmus Sakib", 1287, 4.000};
    printInfo(s1);

    return 0;
}