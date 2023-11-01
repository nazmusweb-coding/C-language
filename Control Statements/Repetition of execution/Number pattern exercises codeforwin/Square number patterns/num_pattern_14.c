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
    int temp_value = r, value = r;

    /* For printing rows */
    for (int i = 1; i <= r; i++)
    {
        /* For priting left half triangle */
        for (int j = 1; j <= i ; j++)
        {
            printf("%d ", value);
            value = value - 1;
        }
        
        /* Value that will be printied */
        value = r;

        /* For printing right half triangle */
        for (int j = c-1; j >= i; j--)
        {
            printf("%d ", temp_value);
        }

        /* Value that will be printied */
        temp_value = r-i;

        /* At end of the first row it will print new line and create second row */
        printf("\n");
    }  
}