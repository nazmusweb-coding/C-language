// Print reverse of the table for a number n.
#include<stdio.h>
int main () {
    int n;
    int table;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    for (int i = 10; i>=1; i--) {           // for reverse loop we need to start with i=10 and updation of i--(post decrement)
        table = n*i;                        // multiplication of n(constant) with 10 to 1 (reversely).we want table for inputed number so we will multiply n with value of i in every loop. it will print a table like 10x2,9x2,8x2[ixn] till 1xn.
        printf("%dx%d=%d\n", n, i, table);  // it will print each value multiplied by i till the condition or the loop ends.
    }
    return 0;
}