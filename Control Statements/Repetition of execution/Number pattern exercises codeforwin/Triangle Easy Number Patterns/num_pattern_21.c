#include <stdio.h>
void pattern(int n)
{
    for (int i = n; i >= 1; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("%d ", i);
        }
        printf("\n");
    }
}
void main()
{
    int n;
    scanf("%d", &n);
    pattern(n);
}