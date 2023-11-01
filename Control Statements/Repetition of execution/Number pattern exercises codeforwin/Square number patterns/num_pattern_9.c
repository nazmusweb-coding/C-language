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
    for (int i = 1; i <= r; i++)
    {
        /* For priting columns */
        for (int j = 1; j <= c; j++)
        {
            /* I just worte the logic for the cover '1' and rest of the box '0' will be made automatically */
           if ((i==1 || i==r) && (j>1 && j<c))
           {
                printf("1 ");
           }
           else if ((j==1 || j==c) && (i>1 && i<r))
           {
                printf("1 ");
           }           
           else
           {
            printf("0 ");
           }
        }
    
        /* At end of the first row it will print new line and create second row */
        printf("\n");
    }  
}