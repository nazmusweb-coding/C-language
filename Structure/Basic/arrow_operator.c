// Arrow Operator
#include <stdio.h>
struct student
{
    char name[20];
    int id;
    float cgpa;
};

int main ()
{
    struct student s1 = {"Nazmus Sakib", 1287, 4.000};
    struct student *ptr = &s1;

    // using (*ptr).parameter is kind of complex, so here the life saver is arrow operator, ptr->parameter
    printf("Name:%s\nID:%d\nCGPA:%0.3f\n", ptr->name, ptr->id, ptr->cgpa);// -> arrow operator
    
    return 0;
}