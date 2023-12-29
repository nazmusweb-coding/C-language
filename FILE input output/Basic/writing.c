// Writing to a file
#include <stdio.h>

int main ()
{
    FILE *fptr;
    fptr = fopen("writing_test.txt",  "w");

    //writing character type data

    fprintf(fptr, "%c", 'A');
    fprintf(fptr, "%c", 'p');
    fprintf(fptr, "%c", 'p');
    fprintf(fptr, "%c", 'l');
    fprintf(fptr, "%c", 'e');
    //writing integer type data
    int i = 123;
    fprintf(fptr, "%d", i);

    fclose(fptr);


    return 0;
}