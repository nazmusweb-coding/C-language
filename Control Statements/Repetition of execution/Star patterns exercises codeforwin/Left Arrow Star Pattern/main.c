#include <stdio.h>
void pattern (int n) {
    // upper part
    for (int i = 1; i <= n; i++)
    {
        // upper left part
        for (int j = n-1; j >= i; j--)
        {
            printf(" ");
        }
        // upper right part
        for (int k = n; k >= i; k--)
        {
            printf("*");
        }
        printf("\n");
    }
    // lower part
    for (int i = 1; i < n; i++)
    {
        // lower left part
        for (int j = 1; j <= i; j++)
        {
            printf(" ");
        }
        // lower right part
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