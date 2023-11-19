#include <stdio.h>
void pattern(int n) {
    int i, j, k, l;
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf("%d ", j);
        }
        for (k = 1; k <= ((n*2)-(i*2)); k++)
        {
            printf("  ");
        }
        for (l = j-1; l >= 1; l--)
        {
            printf("%d ", l);
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