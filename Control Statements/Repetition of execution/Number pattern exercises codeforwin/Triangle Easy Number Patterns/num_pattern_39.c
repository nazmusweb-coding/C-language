#include <stdio.h>
void pattern(int n)
{
    int temp = 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= temp; j++)
        {
            printf("%d ", j);
        }
        temp = temp+2;
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