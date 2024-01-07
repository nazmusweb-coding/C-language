#include <stdio.h>
#include <math.h>

double geometric(int n, double p) {
    double q = 1 - p; 
    return (pow(p,n-1) * q); 
}

int main() {
    int fail_num, fail_den;
    int i, n;
    double p;
    double p_first5 = 0;
    
    scanf("%d %d\n", &fail_num, &fail_den);
    scanf("%d", &n);
    p = 1 - (((double)fail_num)/fail_den);
    
    for (i=1; i<=5; i++) {
        p_first5 += geometric(i, p);
    }
    printf("%.3f", p_first5);
    
    return 0;
}