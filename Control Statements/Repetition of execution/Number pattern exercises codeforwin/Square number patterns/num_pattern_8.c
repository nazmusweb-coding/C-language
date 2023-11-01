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
    int temp_r = 1;
    int temp_c = c;
    /* For printing rows */
    for (int i = 1; i <= r; i++)
    {
        /* For priting columns */
        for (int j = 1; j <= c; j++)
        {
            /* Cross logic made by me[i=j and i'=j'(reversely)] */
           if (i==j || (i==temp_r && j==temp_c))
           {
                printf("1 ");
           }
           else
           {
            printf("0 ");
           }
        }
        temp_r = temp_r+1;
        temp_c = temp_c-1;
        
        /* At end of the first row it will print new line and create second row */
        printf("\n");
    }  
}