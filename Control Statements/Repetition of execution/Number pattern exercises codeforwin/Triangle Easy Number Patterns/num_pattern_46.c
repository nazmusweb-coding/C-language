#include <stdio.h>
void pattern(int n) {
    for (int i = 1; i <= n; i++)
    {
        if (i%2==0)
        {
            for (int j = i; j >= 1; j--)
            {
                printf("%d", j);
            }
        }
        else
        {
            for (int j = 1; j <= i; j++)
            {
                printf("%d", j);
            }
            
        }
        printf("\n");   
    }
}
int main () {
    int n;
    printf("Input N: ");
    scanf("%d", &n);
    pattern(n);
    return 0;
}