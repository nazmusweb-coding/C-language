#include <stdio.h>
#include <math.h>


double binomial(int x, int n, double p) {
    double q = 1.0 - p;
    int comb = 1;
    int end = n - x;
    int i;
    for (i=n; i>end; i--) {
        comb = comb * i;
    }
    for (i=x; i>0; i--) {
        comb = comb / i;
    }
    return (comb * pow(p,x) * pow(q,n-x));
}

int main() {

    int reject_percent, batch_size;
    double p; // success probability
    double prejle2, prejge2;
    int i;
    
    scanf("%d %d", &reject_percent, &batch_size);
    p = 1 - (reject_percent/100.0);
    // printf("sucess prob p=%f\n", p);
    
    // no more than 2 rejects
    for (i = 0, prejle2 = 0.0; i <= 2; i++) {
        prejle2 += binomial(batch_size - i, batch_size, p);        
    }
    printf("%.3f\n", prejle2);
    
    // at least 2 rejects
    for (i = 2, prejge2 = 0.0; i <= batch_size; i++) {
        prejge2 += binomial(batch_size - i, batch_size, p);        
    }
    printf("%.3f\n", prejge2);
    
    return 0;
}