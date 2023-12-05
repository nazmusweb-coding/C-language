#include <stdio.h>
void pattern (int n) {
    // upper part
    for (int i = 1; i <= n; i++)
    {
        // upper left
        for (int j = 1; j < i*2+2; j++)
        {
            printf(" ");
        }
        // upper right
        for (int k = n; k >= i; k--)
        {
            printf("*");
        }
        printf("\n");
    }
    // lower part
    for (int i = 1; i < n; i++)
    {
        // lower left
        for (int j = 1; j < n*2-i*2+2; j++)
        {
            printf(" ");
        }
        // lower right
        for (int k = 1; k <= i+1; k++)
        {
            printf("*");
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