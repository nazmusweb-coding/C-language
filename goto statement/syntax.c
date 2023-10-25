// syntax of go to statement
#include <stdio.h>

void main()
{
   int age;

   printf("Enter you age:");
   scanf("%d", &age);
   if(age>=18)
        goto g; //goto label g
   else
        goto s; //goto label s
    g: //label name
        printf("you are Eligible\n");
    s: //label name
        printf("you are not Eligible");
}