// Format the information of 5 students (name, marks, cgpa, course) in a table like structure in a file
// while solveing it i made it like a small project
#include <stdio.h>
#include <string.h>

typedef struct student
{
    char name[100];
    int mark[4];
    float cgpa;
    char course[50];
}stu;

void write (stu num[], int n)
{
    FILE *file;
    char filename[] = "Homeworksetc.txt";
    char ch = '\n';
    
    file = fopen(filename, "a");
    for (int i = 0; i < n; i++)
    {
        fprintf(file, "Student name     : %s\n", num[i].name);
        fprintf(file, "Student all marks:\n", stdin);
        fprintf(file, "Phy 1012: %d\n", num[i].mark[0]);
        fprintf(file, "CSE 1101: %d\n", num[i].mark[1]);
        fprintf(file, "ENG 1001: %d\n", num[i].mark[2]);
        fprintf(file, "CSE 1209: %d\n", num[i].mark[3]);
        fprintf(file, "Student CGPA     : %0.3f\n", num[i].cgpa);
        fprintf(file, "Course name      : %s\n", num[i].course);
        fprintf(file, "%c", ch);// this will print new line to separate previous and next student's information
    }
    
    fclose(file);
}

void scan (stu num[], int n)
{
    getchar();// it will absorb the buffet new line of menu input
    for (int i = 0; i < n; i++)
    {
        printf("Student name: ");
        fgets(num[i].name, sizeof(num[i].name), stdin);
        num[i].name[strcspn(num[i].name, "\n")] = '\0'; // Remove trailing newline if present

        printf("Student marks: \n");
        printf("Phy 1012: ");
        scanf("%d", &(num[i].mark[0]));
        printf("CSE 1101: ");
        scanf("%d", &(num[i].mark[1]));
        printf("ENG 1001: ");
        scanf("%d", &(num[i].mark[2]));
        printf("CSE 1209: ");
        scanf("%d", &(num[i].mark[3]));
        printf("Student Cgpa: ");
        scanf("%f", &(num[i].cgpa));
        getchar();
        printf("Student Course: ");
        fgets(num[i].course, sizeof(num[i].course), stdin);
        num[i].course[strcspn(num[i].course, "\n")] = '\0'; // Remove trailing newline if present
    }
    write(num, n);
}

void delete ()
{
    FILE *file;
    char filename[] = "Homeworksetc.txt";
    char ch = 0;

    file = fopen(filename, "w");
    fprintf(file, "%c", ch);

    fclose(file);
}

void read (int n)//this is a very very very important function
{
    FILE *file;
    char filename[] = "Homeworksetc.txt";
    char line[1000];

    file = fopen(filename, "r");
    if (file == NULL) {
        printf("Could not open file %s", filename);
        return;
    }

    int studentCount = 0;

    // this loop is also freaking awesome 
    /* THis loop will run and print one line at a time, we have a space in between two student's information
        so when it will find a new line it will count 1 student and it will check the condition n, now many student's
        information do the user want to read actually, if 2 then it will print 2 students information */
    while (fgets(line, sizeof(line), file) != NULL && studentCount < n) {
        printf("%s", line);
        if (line[0] == '\n') {
            studentCount++;
        }
    }

    fclose(file);
}

int menu (stu num[])
{
    int input;
    printf("-----Welcome to the menu-----\n");
    printf("Choose your operation:\n");
    printf("1. Write New Student Information\n");
    printf("2. Read Student Details\n");
    printf("3. Delete stored data\n");
    printf("4. Quit\n");
    printf("Select an option: ");
    scanf("%d", &input);
    if (input==1)
    {
        printf("How many new students's information do you want to write?\n");
        printf("Enter 0 to Go Back\n");
        printf("Enter your value or press 0 to go back: ");
        scanf("%d", &input);
        if (input==0)
        {
            menu(num);
        }
        else
        {
            scan(num, input);
        }
    }
    else if (input==2)
    {
        printf("How many existing student's infromation do you want to read?\n");
        printf("Enter 0 to Go Back\n");
        printf("Enter your value or press 0 to go back: ");
        scanf("%d", &input);
        if (input==0)
        {
            menu(num);
        }
        else
        {
            read(input);
        }
    }
    else if (input==3)
    {
        printf("Are you sure you want to delete whole stored data?\n");
        printf("Enter 0 to Go Back\n");
        printf("Enter press any key to continue(excluding space) or press 0 to go back: ");
        scanf("%d", &input);
        if (input==0)
        {
            menu(num);
        }
        else
        {
            delete();
        }
    }
    else if (input==4)
    {
        return 1;
    }
    else
    {
        printf("Error404! Option not found, Please try again.\n");
        menu(num);
    }
    
    return 0;
}

int main ()
{
    stu num[5];
    
    menu(num);

    return 0;
}