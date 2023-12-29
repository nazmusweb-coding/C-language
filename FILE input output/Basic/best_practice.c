// check if a file exists before reading from it
#include <stdio.h>

int main ()
{
    FILE *fptr;

    fptr = fopen("Newtest.txt", "r");
    if (fptr==NULL)
    {
        // if there is no file named Newtest.txt it will print this
        printf("The file doesn't exist");
    }
    else
    {
        // and if there is a file named Newtest.txt it will close the flie
        fclose(fptr);
    }

}