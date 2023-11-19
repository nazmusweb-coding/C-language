#include <stdio.h>
void pattern (int n) {
    int middle;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
           if (i<=n/2)
           {
                printf("%d ", i);
           }
           else
           {
                printf("%d ", n-i+1);// n-i+1 its the main algorithm, we dont have to give condition for n being odd or even
           }
        }
        printf("\n");
    }
}
int main () {
    int n;
    scanf("%d", &n);
    pattern(n);
    return 0;
}