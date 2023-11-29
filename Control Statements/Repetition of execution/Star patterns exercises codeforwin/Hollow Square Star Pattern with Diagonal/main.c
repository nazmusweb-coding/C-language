#include <stdio.h>
void pattern (int n) {
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (i==1 || i==n || j==1 || j==n || j==i || j==(n-i+1))
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