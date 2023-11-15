#include <stdio.h>
int main() {
    /* known normal character array */
    char name[] = {'S', 'A', 'K', 'I', 'B', '\0'};// Way 1, in this formate to store string type date we have to terminate the end with null character
    printf("%s\n", name);
    /* known as string */
    char university[] = "Norther University Bangladesh";// Way 2, in string null character is automatically added by compiler
    printf("%s", university);
    return 0;
}