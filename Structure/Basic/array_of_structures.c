// Array of structures
#include <stdio.h>
#include <string.h>
struct student
{
    char name[20];
    int id;
    float cgpa;
};
int main () 
{
    struct student cse[45];

    strcpy(cse[0].name, "Nazmus Sakib");
    cse[0].id = 1287;
    cse[0].cgpa = 4.000;

    strcpy(cse[1].name, "Mariya Akter");
    cse[1].id = 1266;
    cse[1].cgpa = 3.812;

    printf("%s\n%d\n%0.3f\n\n", cse[0].name, cse[0].id, cse[0].cgpa);
    printf("%s\n%d\n%0.3f\n\n", cse[1].name, cse[1].id, cse[1].cgpa);
    
    return 0;
}
/* it is like we can store data of 45 students of cse department, each student name id and cpga can be stored in this way */