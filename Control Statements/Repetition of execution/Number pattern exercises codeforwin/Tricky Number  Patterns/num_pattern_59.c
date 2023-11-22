#include <stdio.h>
void pattern (int n) {
    // upper part
    for (int i = 1; i <= n; i++)
    {
        // upper left
        for (int j = 1; j <= i; j++)
        {
            if (j==i)
            {
                printf("%d ", j);
            }
            else
            {
                printf("  ");
            }
        }
        // upper middle
        for (int k = 1; k < n*2-i*2; k++)
        {
            printf("  ");
        }
        // upper right
        for (int l = i; l >= 1; l--)
        {
            if (l==n)// it is to stop overflow of central value
            {
                continue;
            }
            else if (l==i)
            {
                printf("%d ", l);
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n");
    }
    // lower part
    for (int i = n-1; i >= 1; i--)
    {
        // lower left
        for (int j = 1; j <= i; j++)
        {
            if (j==i)
            {
                printf("%d ", j);
            }
            else
            {
                printf("  ");
            }
        }
        // lower middle
        for (int k = 1; k < n*2-i*2 ; k++)
        {
            printf("  ");
        }
        // lower right
        for (int l = i; l >= 1; l--)
        {
            if (l==i)
            {
                printf("%d ", l);
            }
            else
            {
                printf("  ");
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