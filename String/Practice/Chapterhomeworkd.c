// Write a program to replace lowercase letters with uppercase & vice versa in a string
#include <stdio.h>
void replaceLetters (char *input, char *lowercase, char *uppercase) {
    for (int i = 0; input[i]!='\0'; i++)
    {
        for (int j = 0; j < 27; j++)
        {
            if (input[i]==lowercase[j])
            {
                input[i] = uppercase[j];
            }
            else if (input[i]==uppercase[j])
            {
                input[i] = lowercase[j];
            }
        }
    }
}
int main () {
    char lowercase[] = "abcdefghijklmnopqrstuvwxyz";
    char uppercase[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    char input[100];
    fgets(input, sizeof(input), stdin);
    replaceLetters(input, lowercase, uppercase);
    puts(input);
    return 0;
}