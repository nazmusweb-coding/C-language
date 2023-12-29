// Reading form a file
#include <stdio.h>

int main ()
{
    FILE *fptr;
    fptr = fopen("test.txt", "r");

    // readint character type data
    char ch;
    fscanf(fptr, "%c", &ch);
    printf("Character = %c\n", ch);
    fscanf(fptr, "%c", &ch);
    printf("Character = %c\n", ch);
    fscanf(fptr, "%c", &ch);
    printf("Character = %c\n", ch);
    fscanf(fptr, "%c", &ch);
    printf("Character = %c\n", ch);
    fscanf(fptr, "%c", &ch);
    printf("Character = %c\n", ch);
    // reading integer type data
    int i;
    fscanf(fptr, "%d", &i);
    printf("Character = %d\n", i);
    fscanf(fptr, "%d", &i);
    printf("Character = %d\n", i);
    fscanf(fptr, "%d", &i);
    printf("Character = %d\n", i);

    fclose(fptr);


    return 0;
}