#include <stdio.h>
void table(int n)
{
    for (int i = 1; i <= 10 ; i++)
    {
        printf("%d x %d = %d\n", n, i, n*i);
    }
    
}
int main()
{
    int n;
    scanf("%d", &n);
    if (n>=2 && n<=20) table(n);
    return 0;
}