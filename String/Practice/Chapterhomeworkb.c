// Write a program to print the highest frequency character in a string
#include <stdio.h>
#include <string.h>
void frequency(char *string, char *temp_string, char *ch, int counter) {
    strcpy(temp_string, string);
    for (int i = 0; string[i]!='\0'; i++)
    {
        for (int j = 0; temp_string[j]!='\0'; j++)
        {
            if (string[i]==temp_string[j]) {
                counter++;
                if (counter>=2) {
                    ch[0] = temp_string[j];
                    ch[1] = '\0';// marking the end
                }
            }
        }
        counter = 0;
    }
    puts(ch);// will print the highest frequency character or null if there arent any.
}
int main () {
    char ch[] = "null";// here i will store the highest frequency character of the string
    int counter = 0;// it will count the frequency of a character
    char temp_string[100], string[100];// two arrays for finding highest frequency character by comparing
    fgets(string, 100, stdin);
    frequency(string, temp_string, ch, counter);
    return 0;
}