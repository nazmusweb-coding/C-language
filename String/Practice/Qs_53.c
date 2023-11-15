// Write a function to count the occurrence of vowels in a string.
#include <stdio.h>
void counter(char *string, char *vowel) {
    int occurrence = 0;
    for (int i = 0; string[i]!='\0'; i++)
        for (int j = 0; j < 10; j++)
            if (string[i]==vowel[j]) occurrence++;
    printf("Occurrence of vowels: %d", occurrence);
}
int main () {
    char vowel[10] = "aeiouAEIOU";
    char string[200];
    fgets(string, 200, stdin);
    counter(string, vowel);
    return 0;
}