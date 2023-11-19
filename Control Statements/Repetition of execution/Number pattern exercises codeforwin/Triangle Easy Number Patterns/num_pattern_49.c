//important
#include <stdio.h>
void pattern (int n) {
    for (int i = 1; i <= n; i++)
    {
        int difference = n-1;// init(initial) difference, this difference will be reinit for next value of i
        int value = i;// init value of value variable
        for (int j = 1; j <= i; j++)
        {
            printf("%d ", value);// prints the inited value of i
            value = value + difference;// increses value by difference
            difference--;// difference will decrease everytime
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