// dont use return 1 in main function, it gives runtime error
#include <stdio.h>

int triangle (double A, double B, double C, double temp)
{
    if (B>=A && B>=C)
    {
        temp = A;
        A = B;
        if (C>=temp) 
        {
            B = C;
            C = temp;
        }
        else B = temp;
    }
    else if (C>=A && C>=B)
    {
        temp = A;
        A = C;
        if (temp>=B)
        {
            C = B;
            B = temp;
        }
        else C = temp;
    }
    if (A>=(B+C))
    {
        printf("NAO FORMA TRIANGULO\n");
        return 1;
    }
    if ((A*A)==((B*B)+(C*C))) printf("TRIANGULO RETANGULO\n");
    if ((A*A)>((B*B)+(C*C))) printf("TRIANGULO OBTUSANGULO\n");
    if ((A*A)<((B*B)+(C*C))) printf("TRIANGULO ACUTANGULO\n");
    if (A==B && B==C && A==C) printf("TRIANGULO EQUILATERO\n");
    if ((A==B && B!=C) || (A==C && C!=B) || (B==C && C!=A)) printf("TRIANGULO ISOSCELES\n");
    
    return 0;
}

int main () {
 
    double A, B, C, temp;
    scanf("%lf%lf%lf", &A, &B, &C);
    triangle(A, B, C, temp);
    
    return 0;
}