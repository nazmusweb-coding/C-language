#include <stdio.h>
int main() {
    double mean1 = 0.88;
    double mean2 = 1.55;
    printf("%.3f\n", (double) (160 + 40 * (mean1 + (mean1 * mean1))));
    printf("%.3f\n", (double) (128 + 40 * (mean2 + (mean2 * mean2))));
    return 0;
}