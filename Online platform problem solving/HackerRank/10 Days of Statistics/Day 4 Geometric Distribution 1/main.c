#include <stdio.h>
#include <math.h>

int main() {
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    double p = (double) a / (double) b;
    double q = 1 - p;
    double ans = pow(q, c - 1) * p;
    printf("%.3lf", ans);
    return 0;
}