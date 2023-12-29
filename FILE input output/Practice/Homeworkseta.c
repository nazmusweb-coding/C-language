// Write a program to read a string from a file & output to the user
#include <stdio.h>

int main ()
{
    FILE *fptr;
    char filename[] = "Homeworkseta.txt";
    char string[100];

    fptr = fopen(filename, "r");

    // this is best practice
    if (fptr==NULL)
    {
        // if the file isn't found in the same directory
        printf("Could not open file %s", filename);
        return 1;
    }

    if (fgets(string, 100, fptr) != NULL)
    {
        printf("String read from file: %s", string);
    }
    else
    {
        //if there is nothing in the file 
        printf("Error reading file");
    }
    
    fclose(fptr);

    return 0;
}