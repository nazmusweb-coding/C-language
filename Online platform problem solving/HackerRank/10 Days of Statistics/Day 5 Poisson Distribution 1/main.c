#include <stdio.h>

int main() {
    long fact(int);
    double lambda = 2.5;
    int obser = 5;
    double prob = pow(lambda,obser)*exp(-lambda)/fact(obser);
    printf("%.3lf",prob);
    return 0;
}
long fact(int c){
    if (c==1 || c==0){
        return 1;
    }
    else{
        return c*fact(c-1);
    }
}