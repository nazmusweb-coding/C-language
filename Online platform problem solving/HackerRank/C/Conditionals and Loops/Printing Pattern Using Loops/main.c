#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    /* Constraints -> 1<=n<=1000 */
    if (n>=1 && n<=1000)
    {
        /* the upper part */
        for (int i = n; i>=1; i--)
        {
            /* left upper part */
            for (int j = n; j > i ; j--)
            {
                printf("%d ", j);
            }
            /* middle upper part */
            for (int j = 1; j <= (i*2)-1; j++)
            {
                printf("%d ", i);
            }
            /* right upper part */
            for (int j = i+1; j <= n; j++)
            {
                printf("%d ", j);
            }
            /* next line */
            printf("\n");
        }
        /* the lower part */
        for (int i = 2; i <= n ; i++)
        {
            /* left lower part */
            for (int j = n; j > i-1; j--)
            {
                printf("%d ", j);
            }
            /* middle lower part */
            for (int j = 1; j < i*2-2; j++)
            {
                printf("%d ", i);
            }
            /* right lower part */
            for (int j = i; j <= n ; j++)
            {
                printf("%d ", j);
            }
            /* next line */
            printf("\n");
        }
    }
    /* Out-range of constraints */
    else
    {
        return 1;
    }
    return 0;
}