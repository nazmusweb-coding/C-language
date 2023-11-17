#include <stdio.h>
void pattern (int n) {
    int count = 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++, count++)
        {
            printf("%d ", count);
        }
        printf("\n");
    }
}
int main () {
    int n;
    printf("Input N: ");
    scanf("%d", &n);
    pattern(n);
    return 0;
}