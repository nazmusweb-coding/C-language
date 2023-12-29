// Make a program to read 5 integers from a file.
#include <stdio.h>

int main ()
{
    FILE *fptr;
    fptr = fopen("Qs_61.txt", "r");

    int a;
    fscanf(fptr, "%d", &a);
    printf("%d\n", a);
    fscanf(fptr, "%d", &a);
    printf("%d\n", a);
    fscanf(fptr, "%d", &a);
    printf("%d\n", a);
    fscanf(fptr, "%d", &a);
    printf("%d\n", a);
    fscanf(fptr, "%d", &a);
    printf("%d\n", a);

    fclose(fptr);
    return 0;
}