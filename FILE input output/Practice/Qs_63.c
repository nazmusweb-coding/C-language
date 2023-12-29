// Write a program to write all the odd numbers from 1 to n in a file
#include <stdio.h>

int main ()
{
    FILE *fptr;
    fptr = fopen("Qs_63.txt", "w");
    int n;
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        if (i%2!=0)
        {
            fprintf(fptr, "%d\n", i);
        }
        
    }
    
    fclose(fptr);
    return 0;
}