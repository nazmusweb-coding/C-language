#include <stdio.h>
void pattern(int n)
{
    for (int i = 1; i <= (n*2); i=i+2)
    {
        for (int j = i; j <= (n*2); j=j+2)
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