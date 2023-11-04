#include <stdio.h>
void pattern(int n)
{
    int temp;
    for (int i = n; i >= 1; i--)
    {
        for (int j = i; j <= ((i*2)-1); j++)
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