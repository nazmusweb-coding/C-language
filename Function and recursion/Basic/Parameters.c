// taking two parameters and returning their sum.
#include <stdio.h>
// function declaration(with parameters)/prototype
int sum(int a, int b);

int main() {
    int a, b;
    printf("Enter the first value: ");
    scanf("%d", &a);
    printf("Enter the second value: ");
    scanf("%d", &b);
    // function call and storing sum value in a variable
    int s = sum(a, b); // arguments a and b /actual parameters
    printf("The sum of entered digits: %d", s);
    return 0;

}

// function definition
int sum(int x, int y) {
    return x + y;
}