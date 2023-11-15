// Write a program to remove blank spaces in a string
// important
#include <stdio.h>
#include <string.h>
void removeSpaces(char *input, char *output) {
    int i, j = 0;
    for (i = 0; input[i]!='\0'; i++)
    {
        /* if there is not any space it will keep assigning characters into output array, and it will skip space */
        if (input[i]!=' ')// the main logic
        {
            output[j++] = input[i];
        }
    }
    output[j] = '\0';
    puts(output);
}
int main () {
    char input[100], output[100];
    fgets(input, 100, stdin);
    removeSpaces(input, output);
    return 0;
}