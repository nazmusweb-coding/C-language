#include <stdio.h>
 
int main() {
 
    int n[5], even = 0, odd = 0, positive = 0, negative = 0;
    for (int i = 0; i<5; i++)
    {
        scanf("%d", &n[i]);
        if (n[i]>0) positive++;
        if (n[i]<0) negative++;
        if (n[i]%2==0) even++;
        else odd++;
    }
    printf("%d valor(es) par(es)\n", even);
    printf("%d valor(es) impar(es)\n", odd);
    printf("%d valor(es) positivo(s)\n", positive);
    printf("%d valor(es) negativo(s)\n", negative);
    return 0;
}