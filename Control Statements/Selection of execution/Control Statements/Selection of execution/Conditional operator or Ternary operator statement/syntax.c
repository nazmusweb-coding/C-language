// Syntax of Ternary operator
#include <stdio.h>
void main() {
    int a, b;
    printf("Enter two number: ");
    scanf("%d%d", &a, &b);
    // maximum of two numbers
    a>b? printf("%d", a) : printf("%d", b);
}