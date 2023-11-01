// Important
#include <stdio.h>
void pattern(int N)
{
    for (int i = 1; i <= N; i++)
    {
        // Left part
        for (int j = i; j > 1 ; j--)
        {
            printf("%d ", j);
        }

        // Right part
        for (int j = 1; j <= (N-i+1); j++)
        {
            printf("%d ", j);
        }
        printf("\n");
    }
}
void main() {
    int N;
    printf("Input N: ");
    scanf("%d", &N);
    pattern(N);
}