//important
#include <stdio.h>
void pattern (int n) {
    int odd, value = 0;
    for (int i = 1; i <= n; i++)
    {
        if (i%2!=0)
        {
            odd = i;
        }

        value += odd;

        for (int j = 1; j <= i; j++)
        {
            if (i%2==0)
            {
                printf("%d ", value);
                value--;
            }
            else
            {
                printf("%d ", value);
                value++;
            }
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