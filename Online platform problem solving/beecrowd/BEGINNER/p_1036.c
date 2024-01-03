// it gave me runtime error because i was using return 1 in if function
#include <stdio.h>
#include <math.h>
 
int main() {
 
    double A, B, C, X, X1;
    scanf("%lf%lf%lf", &A, &B, &C);;
    X = ((-B) + sqrt((pow(B, 2)-(4*A*C))))/(2*A);
    X1 = ((-B) - sqrt((pow(B, 2)-(4*A*C))))/(2*A);
    if ((A==0.0) || isnan(X) || isnan(X1))
    {
        printf("Impossivel calcular\n");
    }
    else
    {
        printf("R1 = %0.5lf\n", X);
        printf("R2 = %0.5lf\n", X1);
    }

    return 0;
}