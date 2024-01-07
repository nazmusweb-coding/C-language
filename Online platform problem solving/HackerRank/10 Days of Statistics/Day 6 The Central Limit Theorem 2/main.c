#include <stdio.h>
#include <math.h>

int main() {
    int n = 100;
    double mean = n * 2.4;
    double sd = 2.0 * pow(n, 0.5);

    double res = erf((250 - mean) / (sd * sqrt(2.0)));

    printf("%.4f", (0.5) * (1 + res));

    return 0;
}