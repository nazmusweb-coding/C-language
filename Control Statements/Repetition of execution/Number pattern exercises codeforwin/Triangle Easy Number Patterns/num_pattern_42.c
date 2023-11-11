#include <stdio.h>
void pattern(int n)
{
    int k;
    for (int i = 1; i <= n; i++)
    {
        k = 2;
        for (int j = 1; j <= i; j++, k+=2)
        {
            printf("%d ", k);
        }
        k-=4;// connects two part
        for (int j = 1; j < i ; j++, k-=2)
        {
            printf("%d ", k);
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