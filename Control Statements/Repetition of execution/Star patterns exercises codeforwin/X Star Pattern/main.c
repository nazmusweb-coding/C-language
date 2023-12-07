#include <stdio.h>
void pattern (int n) {
    for (int i = 1; i < n*2; i++)
    {
        for (int j = 1; j < n*2; j++)
        {
            if (j==i || j==n*2-i)
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