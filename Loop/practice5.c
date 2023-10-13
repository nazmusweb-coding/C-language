// Print the table of a number input by the user. n=2
#include<stdio.h>
int main () {
    int n;
    printf("Enther value of n: ");
    scanf("%d", &n);

    for (int i = 1; i<=10; i++)
    {
        int table = i*n;                            // we want table for inputed number so we will multiply n with value of i in every loop. it will print a table like 1x2,2x2,3x2[ixn] till 10xn.
        printf("%dx%d=%d\n", n, i, table);          // it will print each value multiplied by i till the condition or the loop ends
    }

    return 0;
}