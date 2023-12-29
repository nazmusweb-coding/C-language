// Declaring File pointer, opening file(fopen), closing file(fclose)
#include <stdio.h>

int main()
{
    FILE *fptr; // file pointer 

    /* test.txt is the file_name, "r" is reading mode */
    fptr = fopen("test.txt", "r");// this statement opens the file in read only mode

    fclose(fptr);// this statement closes the file.


    return 0;
}

/*
    File Opening Modes
    "r"  - open to read
    "rb" - open to read in binary
    "w"  - open to write
    "wb" - open to write in binary
    "a"  - open to append
*/