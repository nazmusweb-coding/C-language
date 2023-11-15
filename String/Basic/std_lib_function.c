// Standard Library Functions --> <string.h>
/* 1. strlen - counts length 
    2. strcpy - replaces first string by second string
    3. strcat - add second string in first string without any space(adds to both strings together without space), is called concatenation, which is an important world for a programmer. for this operation first string must be bigger enough to contain the whole string that will be made after strcat operation
    4. strcmp - compares two strings and return a value, 0 if both are equal, 1 if first string>second string, -1 if first string<second string */
#include <stdio.h>
#include <string.h>
void use_of_strlen() {
    char name[] = "Nazmus";
    int length = strlen(name);
    printf("Length is: %d\n", length);
}
void use_of_strcpy() {
    char new_string[] = "new string";
    char old_string[] = "old string";
    strcpy(new_string, old_string);
    printf("%s\n", new_string);
}
void use_of_strcat() {
    char first_string[] = "Hello";// first array size have to be bigger enough to contain the whole string that will be made after strcat operation
    char second_string[] = "World";
    strcat(first_string, second_string);
    puts(first_string);
}
void use_of_strcmp() {
    char first_word[] = "kala";
    char second_word[] = "kala";
    printf("%d\n", strcmp(first_word, second_word));
}
int main() {
    use_of_strlen();
    use_of_strcpy();
    use_of_strcat();
    use_of_strcmp();
    return 0;
}