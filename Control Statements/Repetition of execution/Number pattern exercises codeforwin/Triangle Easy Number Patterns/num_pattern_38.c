#include <stdio.h>
void pattern(int n)
{
    int mid;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            if (i>2 && i<n)
            {
                if (j==1 || j==i)
                {
                    printf("1 ");
                }
                else
                {
                    printf("0 ");
                }
                
            }
            else
            {
                printf("1 ");
            }
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