// Ask the user to enter their firstName & print it back to them.
// also try this with their fullName
#include <stdio.h>
void firstname(char arr[]) {
    printf("Enter your first name: ");
    scanf("%s", arr);
    printf("Your first name is %s", arr);
}
void fullname(char arr[]) {
    printf("Enter your full name: ");
    fgets(arr, 100, stdin);
    puts(arr);
}
int main() {
    char firstName[10], fullName[20];
    fullname(fullName);
    firstname(firstName);
    return 0;
}