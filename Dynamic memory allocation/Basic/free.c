// free() we use it to free memory that is allocated using malloc & calloc
#include <stdio.h>
#include <stdlib.h>

int main ()
{
    int *ptr, n;
    scanf("%d", &n);
    ptr = (int*)calloc(n,sizeof(int));
    for (int i = 0; i < n; i++)
    {
        printf("%d\n", ptr[i]);
    }
    free(ptr);//syntax
    ptr = (int*)calloc(2,sizeof(int));
    for (int i = 0; i < 2; i++)
    {
        printf("%d\n", ptr[i]);
    }
}