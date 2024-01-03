#include <stdio.h>
 
int main() {
    int n;
    double N;
    scanf("%lf", &N);
    n = N;
    int coin = (N-n)*100;//with coin we will be working with the floating values
    if (N>=0 && N<=1000000)
    {
        printf("NOTAS:\n");
        printf("%d nota(s) de R$ 100.00\n", n/100);
        n = n%100;
        printf("%d nota(s) de R$ 50.00\n", n/50);
        n = n%50;
        printf("%d nota(s) de R$ 20.00\n", n/20);
        n = n%20;
        printf("%d nota(s) de R$ 10.00\n", n/10);
        n = n%10;
        printf("%d nota(s) de R$ 5.00\n", n/5);
        n = n%5;
        printf("%d nota(s) de R$ 2.00\n", n/2);
        n = n%2;
        printf("MOEDAS:\n");
        printf("%d moeda(s) de R$ 1.00\n", n/1);
        printf("%d moeda(s) de R$ 0.50\n", coin/50);
        coin = (coin%50);
        printf("%d moeda(s) de R$ 0.25\n", coin/25);
        coin = (coin%25);
        printf("%d moeda(s) de R$ 0.10\n", coin/10);
        coin = (coin%10);
        printf("%d moeda(s) de R$ 0.05\n", coin/5);
        coin = (coin%5);
        printf("%d moeda(s) de R$ 0.01\n", coin/1);
    }
    else
    {
        return 1;
    }
 
    return 0;
}