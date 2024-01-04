// Write a function that prints Assalamu Alaikum if user is Bangladeshi & Bonjour if the user is French.
#include <stdio.h>
#include <string.h> // imported for comparing strings in conditional.
// function declaration
void bangladeshi();
void french();

int main() {
    char user[11];
    printf("Where are you from B or F(Bangladeshi/French)? ");
    scanf("%s", user);
    if (strcmp(user, "B") == 0 || strcmp(user, "Bangladeshi") == 0) {
        // function call
        bangladeshi();
    } else if (strcmp(user, "F") == 0 || strcmp(user, "French") == 0) {
        // function call
        french();
    }
    return 0;
}
// function definition
void bangladeshi() {
    printf("Assalamu Alaikum");
}

void french() {
    printf("Bonjour");
}