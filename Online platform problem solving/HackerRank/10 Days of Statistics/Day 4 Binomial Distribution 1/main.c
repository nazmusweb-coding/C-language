#include <stdio.h>
#include <math.h>

int C(int n, int x){
    if(x == n) return 1;
    if(1 == x) return n;
    return C(n - 1, x) + C(n - 1, x - 1);
}

double binominal(int n, int x, double p, double q){
    return C(n, x) * pow(p, x) * pow(q, 6 - x);
}

int main() {
      
    double p = 1.09/(1.09 + 1);
    double q = 1 - p;
    double ans = 0;
    for(int i = 3; i <= 6; ++i){
        ans += binominal(6, i, p, q);
    }
    printf("%.3f", ans);
    return 0;
}