// Write a program to convert all lowercase vowels to uppercase in a string.
#include <stdio.h>
void convert(char *string, char *lower, char *upper) {
    for (int i = 0; string[i]!='\0'; i++)
        for (int j = 0; j < 5; j++)
            if (string[i]==lower[j]) string[i]=upper[j];     
    puts(string);
}
int main () {
    char lower[] = "aeiou";
    char upper[] = "AEIOU";
    char string[100];
    fgets(string, 100, stdin);
    convert(string, lower, upper);
    return 0;
}