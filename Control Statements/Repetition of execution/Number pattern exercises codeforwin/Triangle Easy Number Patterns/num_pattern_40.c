#include <stdio.h>
void pattern(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= 1; j++)
        {
            if (i%2==0)
            {
                for (int k = 2; k <= (i*2); k=k+2)
                {
                    printf("%d ", k);
                }
            }
            else
            {
                for (int k = 1; k <= (i*2); k=k+2)
                {
                    printf("%d ", k);
                }  
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