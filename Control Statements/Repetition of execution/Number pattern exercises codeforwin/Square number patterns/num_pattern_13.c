#include <stdio.h>
void input(int *r, int *c);
void pattern(int r, int c);
void main ()
{
    int rows, columns;
    input(&rows, &columns);
    pattern(rows, columns);
}
void input(int *r, int *c)
{
    printf("Input rows: ");
    scanf("%d", &(*r));
    printf("Input columns: ");
    scanf("%d", &(*c));
}
void pattern(int r, int c)
{
    int value = 1;

    /* For printing rows */
    for (int i = 1; i <= r; i++)
    {
        /* For priting columns */
        for (int j = 1; j <= c; j++)
        {
            printf("%d ", value);
            value = value +1;
        }
        /* At end of the first row it will print new line and create second row */
        printf("\n");
    }  
}