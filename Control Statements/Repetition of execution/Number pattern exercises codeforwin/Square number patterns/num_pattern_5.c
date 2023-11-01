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
            /* Case 1: Row is even and Column is even; example=(4x4) */
            if (r%2==0 && c%2==0)
            {
                if ((i==(r/2) && (j==(c/2) || j==(c/2)+1)) || (i==(r/2)+1 && (j==(c/2) || j==(c/2)+1)))
                {
                    printf("0 ");
                }
                else
                {
                    printf("1 ");
                }
            }

            /* Case 2: Row is even and Column is odd; example=(4x5) */
            else if (r%2==0 && c%2!=0)
            {
                if ((i==(r/2) && j==(c/2)+1) || (i==(r/2)+1 && j==(c/2)+1))
                {
                    printf("0 ");
                }
                else
                {
                    printf("1 ");
                }
            }

            /* Case 3: Row is odd and Column is even; example=(5x4) */
            else if (r%2!=0 && c%2==0)
            {
                if (i==(r/2)+1 && (j==(c/2) || j==(c/2)+1))
                {
                    printf("0 ");
                }
                else
                {
                    printf("1 ");
                }
            }
            
            /* Case 4: Row is odd and Column is odd; example=(5x5) */
            else
            {
                if (i==(r/2)+1 && j==(c/2)+1)
                {
                    printf("0 ");
                }
                else
                {
                    printf("1 ");
                }
            }
            
        }
        /* At end of the first row it will print new line and create second row */
        printf("\n");
    }  
}