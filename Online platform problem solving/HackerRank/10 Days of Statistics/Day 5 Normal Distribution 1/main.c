#include <stdio.h>

// cumulative density (distribtuion function) for a normal;
double pnorm(double m, double sd, double a){
    double b = erf((a-m)/(sd*pow(2.0,0.5)));
    return 0.5*(1+b);
}

int main() {

    double mux, sdx, q1, lb, ub;
    scanf("%lf %lf\n %lf\n%lf %lf", &mux, &sdx, &q1, &lb, &ub);
    
    // probability less than 19.5
    
    printf("%.3lf\n", pnorm(mux, sdx, q1));
    
    // prob between 20 to 22
    
     printf("%.3lf\n", pnorm(mux, sdx, ub) - pnorm(mux, sdx, lb));
    
    return 0;
}