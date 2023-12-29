// Read and write a char
#include <stdio.h>

int main ()
{
    //file pointer declaration
    FILE *fptr;
    //file opening statement
    fptr = fopen("test.txt", "r");// have to switch to "w" to write

    // reading with fgetc() - one character at once
    printf("%c\n", fgetc(fptr));
    printf("%c\n", fgetc(fptr));
    printf("%c\n", fgetc(fptr));
    printf("%c\n", fgetc(fptr));
    printf("%c\n", fgetc(fptr));
    //writing with fputc() - it will overwrite the file one character at once
    fputc('M', fptr);
    fputc('A', fptr);
    fputc('N', fptr);
    fputc('G', fptr);
    fputc('O', fptr);

    fclose(fptr);//file closing statement
    return 0;
}