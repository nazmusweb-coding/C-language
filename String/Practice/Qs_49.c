// Make a program that inputs user's name and prints it's length
#include <stdio.h>
int main() {
    char name[100];
    int count = 0;
    fgets(name, 100, stdin);
    for (int i = 0; name[i]!='\0'; i++) count++;
    printf("%d", count-1);
    return 0;
}