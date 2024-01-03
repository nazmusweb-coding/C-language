#include <stdio.h>
 
int main() {
 
    int a, b, sum = 0;
    scanf("%d%d", &a, &b);

    if (a>b)
    {
        for ( int i = a-1; i > b; i--)
        {
            if(i%2!=0) sum += i;
        }
    }
    else 
    {
        for ( int i = a+1; i < b; i++)
        {
            if(i%2!=0) sum += i;
        }
    }
    printf("%d\n", sum);
    return 0;
}