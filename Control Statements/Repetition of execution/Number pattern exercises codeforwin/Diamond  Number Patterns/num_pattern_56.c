#include <stdio.h>
void pattern (int n) {
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j < i*2; j++)
        {
            printf("%d ", j);
        }
        printf("\n");
    }
    for (int i = n-1; i >= 1; i--)
    {
        for (int j = 1; j < i*2; j++)
        {
            printf("%d ", j);
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