#include <stdio.h>
void pattern(int n) {
    int difference, value;
    difference = value = 1;//initialized value of both variables
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("%d ", value);
            value = value + difference;// increases value by difference
            difference++;// increases difference
        }
        printf("\n");
    }
}
int main () {
    int n;
    scanf("%d", &n);
    pattern(n);
    return 0;
}