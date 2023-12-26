// Write a program to store the data of 3 students.
#include <stdio.h>
#include <string.h>
struct student
{
    char name[20];
    char section[2];
    int id;
    float cgpa;
};
int main ()
{
    struct student s1, s2, s3;

    strcpy(s1.name, "Nazmus Sakib");
    strcpy(s1.section, "2F");
    s1.id = 1287;
    s1.cgpa = 4.000;

    strcpy(s2.name, "Mariya Akter");
    strcpy(s2.section, "2F");
    s2.id = 1266;
    s2.cgpa = 3.812;

    strcpy(s3.name, "Shamin Akter");
    strcpy(s3.section, "2F");
    s3.id = 1260;
    s3.cgpa = 3.500;

    printf("Name:%s\nSection:%s\nID:%d\nCGPA:%0.3f\n\n", s1.name, s1.section, s1.id, s1.cgpa);
    printf("Name:%s\nSection:%s\nID:%d\nCGPA:%0.3f\n\n", s2.name, s2.section, s2.id, s2.cgpa);
    printf("Name:%s\nSection:%s\nID:%d\nCGPA:%0.3f\n\n", s3.name, s3.section, s3.id, s3.cgpa);

    return 0;
}
// benifits: saves us from creating too many variables, good data management and organization