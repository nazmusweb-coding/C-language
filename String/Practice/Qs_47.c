// Create a string firstName & lastName to store details of user & print all the characters using a loop
#include <stdio.h>
void print(char arr[]) {
    for (int i = 0; arr[i]!='\0'; i++)// condition-> run loop till arr doesn't reach till null character
    {
        printf("%c", arr[i]);
    }
    printf("\n");
}
int main() {
    char firstName[] = "Nazmus", lastName[] = "Sakib";
    print(firstName);
    print(lastName);
    return 0;
}