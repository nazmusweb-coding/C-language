// Important
#include <stdio.h>
void pattern(int N)
{
    /* Counter variable for middle loop condition, and printer variables for three parts */
    int counter = 0, printer = N, printer2 = N, printer3 = N;

    /* Upper part */
    for (int i = 1; i <= N; i++)
    {
        /* Upper left part */
        for (int j = 1; j < i ; j++)
        {
            printf("%d ", printer2);
            printer2--;//decreases value by 1 that will be printed   
        }
        printer2++;//for connecting upper left and upper right

        /* Upper middle part */
        for (int j = 1; j < ((N*2)-counter) ; j++)
        {
            printf("%d ", printer);
        }
        counter = counter + 2;//for condition of upper middle part's loop
        printer--;//decreases the value by 1 that will be printed in upper middle into next circle

        /* Upper right part */
        for (int j = 1; j < i ; j++)
        {
            printf("%d ", printer2);
            printer2++;//increases value by 1 that will be printed 
        }
        printer2 = N;//assigning value that will be printted in upper left into next circle
        printf("\n");
    }
    counter = 2, printer = 2;//reassiging values for lower part

    /* Lower part */
    for (int i = 1; i < N; i++)
    {
        /* Lower left part */
        for (int j = N; j > i; j--)
        {
            printf("%d ", printer2);
            printer2--;//decreases value by 1 that will be printed   
        }
        printer2++;//for connecting lower left and lower right

        /* Lower middle part */
        for (int j = 1; j < counter ; j++)
        {
            printf("%d ", printer);
        }
        counter = counter + 2;//for condition of lower middle part's loop
        printer++;//decreases the value by 1 that will be printed in lower middle into next circle

        /* Lower right part */
        for (int j = N; j > i; j--)
        {
            printf("%d ", printer2);
            printer2++;//increases value by 1 that will be printed 
        }
        printer2 = N;//assigning value that will be printted in lower left into next circle
        printf("\n");
    }
    
}
void main() {
    int N;
    printf("Input N: ");
    scanf("%d", &N);
    pattern(N);
}