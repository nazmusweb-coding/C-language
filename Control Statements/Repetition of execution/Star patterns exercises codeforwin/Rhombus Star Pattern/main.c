#include <stdio.h>
void pattern (int n) {
    for (int i = 1; i <= n; i++)
    {
        // for space
        for (int j = n; j >= i; j--)
        {
            printf(" ");
        }
        // for star
        for (int k = 1; k <= n; k++)
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