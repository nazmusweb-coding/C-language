#include <stdio.h>
void pattern (int n) {
    for (int i = 1; i <= n; i++)
    {
        for (int j = n; j >= i; j--)
        {
            printf(" ");
        }
        for (int k = 1; k <= n; k++)
        {
            if (i==1 || i==n || k==1 || k==n)
            {
                printf("*");
            }
            else
            {
                printf(" ");
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