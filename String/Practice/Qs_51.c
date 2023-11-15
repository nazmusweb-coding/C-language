/* Salting 
    Find the salted form of a password entered by user if the salt is "123" & added at the end */
#include <stdio.h>
#include <string.h>
void salting(char *str) {
    scanf("%s", str);
    char salt[] = "123";
    char new[100];
    strcpy(new, str);
    strcat(new, salt);
    puts(new);
}
int main() {
    char str[100];
    salting(str);
    return 0;
}