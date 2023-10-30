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
    /* For printing rows */
    for (int i = 0; i < r; i++)
    {
        /* For priting columns */
        for (int j = 0; j < c; j++)
        {
            /* if Column(first, last) or Row(first, last) - print 1 */
            if (i==0 || j==0 || i==(r-1) ||j==(c-1))
            {
                printf("1 ");
            }
            /* for rest of the Column(j) and row - print 0 */
            else
            {
                printf("0 ");
            }
        }
        /* At end of the first row it will print new line and create second row */
        printf("\n");
    }  
}