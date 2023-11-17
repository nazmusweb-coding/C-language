// important
#include <stdio.h>
void pattern(int n)
{
    int k = 0;
    for (int i = 1; i <= n; i++)
    {
        k = i+1;
        for (int j = 3; j <= i; j++, k++)
        {
            printf("%d ", k);

        }
        for (int j = (i*2)-1; j >= i; j--)
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