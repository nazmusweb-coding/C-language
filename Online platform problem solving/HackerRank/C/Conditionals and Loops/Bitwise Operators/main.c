#include <stdio.h>
#include <math.h>
void calculate_the_maximum(int n, int k)
{
    /* variables declaration with 0 to use relational operator, compare the values and store the maximum value */
    int and_maximum = 0, or_maximum = 0, xor_maximum = 0;
    for (int i = 1; i < n; i++)
    {
        for (int j = i+1; j <= n; j++)
        {
            /* storing the maximum value of bitwise expressions less than k */
            if ((i&j)>=and_maximum && (i&j)<k) and_maximum = i&j;
            if ((i|j)>=or_maximum && (i|j)<k) or_maximum = i|j;
            if ((i^j)>=xor_maximum && (i^j)<k) xor_maximum = i^j;
        }
    }
    printf("%d\n%d\n%d", and_maximum, or_maximum, xor_maximum);
}
int main() 
{
    int n, k;
    scanf("%d %d", &n, &k);
    /* funcion call if constrainsts are within limit */
    if ((n>=2 && n<=pow(10, 3)) && (k>=2 && k<=n)) calculate_the_maximum(n, k);
    return 0;
}