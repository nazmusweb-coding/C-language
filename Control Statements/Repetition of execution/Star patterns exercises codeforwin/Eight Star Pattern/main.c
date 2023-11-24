#include <stdio.h>
void pattern (int n) {
    for (int i = 1; i < n*2; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            // top line:
            if (i==1 && (j>1 && j<n))
            {
                printf("*");
            }
            // top left and right vertical line:
            else if ((j==1 || j==n) && (i>1 && i<(n*2)/2))
            {
                printf("*");
            }
            // middle line:
            else if (i==(n*2)/2 && (j>1 && j<n))
            {
                printf("*");
            }
            // bottom left and right vertical line:
            else if ((j==1 || j==n) && (i>(n*2)/2 && i<n*2-1))
            {
                printf("*");
            }
            // bottom line:
            else if (i==(n*2-1) && (j>1 && j<n)) {
                printf("*");
            }
            // respoinsible for making gap:
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