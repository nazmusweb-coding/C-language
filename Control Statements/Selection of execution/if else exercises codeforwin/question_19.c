/*
Write a C program to input marks of five subjects Physics, Chemistry, Biology, Mathematics and Computer. Calculate percentage and grade according to following:
Percentage >= 90% : Grade A
Percentage >= 80% : Grade B
Percentage >= 70% : Grade C
Percentage >= 60% : Grade D
Percentage >= 40% : Grade E
Percentage < 40% : Grade F  */
#include <stdio.h>
void result(int phy, int chem, int bio, int math, int computer);
void main() {
    int a, b, c, d, e;
    printf("Input marks of five subjects: ");
    scanf("%d%d%d%d%d", &a, &b, &c, &d, &e);
    result(a, b, c, d, e);
}
void result(int phy, int chem, int bio, int math, int computer) {
    float percentage = (phy+chem+bio+math+computer)/5;
    if (phy>=0 && phy<=100 && chem>=0 && chem<=100 && bio>=0 && bio<=100 && math>=0 && math<=100 && computer>=0 && computer<=100)
    {
        if (percentage>=90.0)
        {
            printf("Percentage = %0.2lf\nGrade A", percentage);
        }
        else if (percentage>=80.0)
        {
            printf("Percentage = %0.2lf\nGrade B", percentage);
        }
        else if (percentage>=70.0)
        {
            printf("Percentage = %0.2lf\nGrade C", percentage);
        }
        else if (percentage>=60.0)
        {
            printf("Percentage = %0.2lf\nGrade D", percentage);
        }
        else if (percentage>=40.0)
        {
            printf("Percentage = %0.2lf\nGrade E", percentage);
        }
        else if (percentage<40.0)
        {
            printf("Percentage = %0.2lf\nGrade F", percentage);
        }
    }
    else
    {
        printf("Marks limit is 100");
    }
    
}