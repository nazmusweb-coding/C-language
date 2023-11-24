#include <stdio.h>
void pattern (int n) {
    // upper part
    for (int i = 1; i <= n; i++)
    {
        // upper left part
        for (int j = n; j >= i; j--)
        {
            printf("*");
        }
        // upper middle part
        for (int k = 1; k <= i*2-2; k++)
        {
            printf(" ");
        }
        // upper right part
        for (int l = n; l >= i; l--)
        {
            printf("*");
        }
        printf("\n");
    }
    // lower part
    for (int i = 1; i <= n; i++)
    {
        // lower left part
        for (int j = 1; j <= i; j++)
        {
            printf("*");
        }
        // lower middle part
        for (int k = 1; k <= n*2-i*2; k++)
        {
            printf(" ");
        }
        // lower right part
        for (int l = 1; l <= i; l++)
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