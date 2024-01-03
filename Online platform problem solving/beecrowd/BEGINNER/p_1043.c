#include <stdio.h>
 
int main() {
 
    double A, B, C;
    scanf("%lf%lf%lf", &A, &B, &C);
    if (A+B>C && B+C>A && C+A>B)
    {
        printf("Perimetro = %0.1lf\n", A+B+C);
    }
    else printf("Area = %0.1lf\n", ((A+B)*C)/2);
    
    return 0;
}