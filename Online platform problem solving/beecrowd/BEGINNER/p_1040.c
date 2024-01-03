#include <stdio.h>
 
int main() {
 
    double n1, n2, n3, n4, n5, average;
    scanf("%lf%lf%lf%lf", &n1, &n2, &n3, &n4);
    average = ((n1*2)+(n2*3)+(n3*4)+(n4*1))/(2+3+4+1);
    printf("Media: %0.1lf\n", average);
    if(average<5.0)
    {
        printf("Aluno reprovado.\n");
    }
    else if (average>= 5.0 && average<=6.9)
    {
        printf("Aluno em exame.\n");
        scanf("%lf", &n5);
        printf("Nota do exame: %0.1lf\n", n5);
        average = (average + n5)/2;
        if (average>=5.0)
        {
            printf("Aluno aprovado.\n");
        }
        else printf("Aluno reprovado.\n");
        printf("Media final: %0.1lf\n", average);
    }
    else printf("Aluno aprovado.\n");
 
    return 0;
}