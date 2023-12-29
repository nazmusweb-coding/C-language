// End of file(benefit of fgetc())
#include <stdio.h>

int main ()
{
    FILE *fptr;
    fptr = fopen("EOF.txt", "r");

    // firstly i assigned the first char to get inside of the loop
    char ch = fgetc(fptr);

    //it will run till fgets returns end of file(EOF)
    while (ch!=EOF)
    {
        printf("%c", ch);
        ch = fgetc(fptr);
    }
    
    fclose(fptr);
    return 0;
}
// so basically fgetc returns EOF/NULL at the last of written textual file