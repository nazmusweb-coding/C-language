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
            /* if Column(j) - even print 1 */
            if (i%2!=0 && j%2!=0)
            {
                printf("1 ");
            }
            else if (i%2!=0 && j%2==0)
            {
                printf("0 ");
            }
            else if (i%2==0 && j%2!=0)
            {
                printf("0 ");
            }
            /* if Column(j) - odd then print 0 */
            else
            {
                printf("1 ");
            }
        }
        /* At end of the first row it will print new line and create second row */
        printf("\n");
    }  
}