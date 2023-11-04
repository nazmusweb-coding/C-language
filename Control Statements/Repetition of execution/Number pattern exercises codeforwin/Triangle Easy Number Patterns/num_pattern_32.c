//important
#include <stdio.h>
void pattern(int n)
{
    int temp;
    for (int i = 1; i <= n; i++)
    {
        temp = i;
        for (int j = 1; j <= i ; j++, temp++)
        {
            printf("%d ", temp);
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