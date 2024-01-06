// In Qs_66.c, free the memory allocated with calloc
#include <stdio.h>
#include <stdlib.h>

int main ()
{
    int *ptr, n;
    scanf("%d", &n);
    ptr = (int *) calloc(n, sizeof(int));
    for (int i = 0; i < n; i++)
    {
        printf("%d\n", ptr[i]);
    }
    
    free(ptr);// we free dynamic memory that we allocated by calloc
    return 0;
}