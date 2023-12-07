#include <stdio.h>
int main() {
    int n, sum, count = 0;
    scanf("%d", &n);
    int Petya[n], Vasya[n], Tonya[n];
    if (n>=1 && n<=1000)
    {
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &Petya[i]);
            scanf("%d", &Vasya[i]);
            scanf("%d", &Tonya[i]);
        }
        for (int i = 0; i < n; i++)
        {
            sum = Petya[i] + Vasya[i] + Tonya[i];
            if (sum>1 && sum<4) count++;
        } 
        printf("%d",count);
    }
    else return 1;
    return 0;
}