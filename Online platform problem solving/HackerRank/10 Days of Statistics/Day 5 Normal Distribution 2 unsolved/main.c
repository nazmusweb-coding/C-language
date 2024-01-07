#include <stdio.h>
#include <string.h>
#include <math.h>


// F_x (X <= x)
double cumulative_distribution (double x, double mean, double variance) {
    static const double sqrt_2 = sqrt(2);
    static const double one_half = 1.0 / 2.0;
    
    return one_half * (1 + erf ((x - mean) / (sqrt (variance) * sqrt_2)));
}


int main () {
    double mean, variance;
    double grade_1, grade_2;
    scanf ("%lf %lf", &mean, &variance);
    scanf ("%lf %lf", &grade_1, &grade_2);
    variance *= variance;
    
    printf ("%.2lf\n%.2lf\n%.2lf\n",
           100.0 * (1.0 - cumulative_distribution (grade_1, mean, variance)),
           100.0 * (1.0 - cumulative_distribution (grade_2, mean, variance)),
           100.0 * (cumulative_distribution (grade_2, mean, variance)));
    
    return 0;
}