#include <stdio.h>
void pattern (int n) {
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("%d ", j);
        }
        for (int k = i-1; k >= 1; k--)
        {
            printf("%d ", k);
        }
        printf("\n");
    }
    for (int i = 1; i < n; i++)
    {
        for (int j = 1; j <= n-i; j++)
        {
            printf("%d ", j);
        }
        for (int k = n-i-1; k >= 1 ; k--)
        {
            printf("%d ", k);
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