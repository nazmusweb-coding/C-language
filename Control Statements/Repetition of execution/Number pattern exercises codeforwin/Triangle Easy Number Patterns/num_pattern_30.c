#include <stdio.h>
void pattern(int n)
{
    for (int i = n; i >= 1; i--)
    {
        for (int j = i; j <= n; j++)
        {
            printf("%d ", j);
        }
        printf("\n");
    }
    
}
void main()
{
    int n;
    printf("Input n: ");
    scanf("%d", &n);
    pattern(n);
}