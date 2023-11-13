#include <stdio.h>
void pattern(int n)
{
    int k;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("%d ", j);
        }
        for (int j = i-1; j >= 1; j--)
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