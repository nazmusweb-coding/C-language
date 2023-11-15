// Check if a given character is present in a string or not.
#include <stdio.h>
void finder(char *string, char ch) {
    for (int i = 0; string[i]!='\0'; i++)
        if (string[i]==ch) printf("At index: %d\n", i);
}
int main () {
    char ch, string[100];
    fgets(string, 100, stdin);
    printf("Search: ");
    scanf("%c", &ch);
    finder(string, ch);
    return 0;
}