// Replace the data in file with the number of vowels in the string.
// important
#include <stdio.h>

int main ()
{
    FILE *fptr;
    char filename[] = "Homeworksetb.txt";
    char vowel_list[] = "aeiouAEIOU";
    char ch;
    int i = 0, vowels = 0;

    fptr = fopen(filename, "r");

    if (fptr==NULL)
    {
        printf("Could not find file %s", filename);
        return 1;
    }
    
    while ((ch = fgetc(fptr))!=EOF)
    {
        i = 0;
        while (vowel_list[i]!='\0')
        {
            if (ch == vowel_list[i])
            {
                vowels++;
                break;
            }
            i++;
        }

    }
    
    fclose(fptr);

    fptr = fopen(filename, "w");

    fprintf(fptr, "%d", vowels);

    fclose(fptr);
    
    return 0;
}