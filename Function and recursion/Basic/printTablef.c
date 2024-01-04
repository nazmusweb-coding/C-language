// making printTable function
#include<stdio.h>
// function declaration(with parameter)/prototype
void printTable(int n);

int main() {
    int n;
    printf("Enter the number: ");
    scanf("%d", &n);
    // function call
    printTable(n); // argument n /actual parameter(n)
    return 0;
}

// function definition
void printTable(int n) { // parameter(int n)/ formal parameter(int n). it is empty, the real vaule comes from calling/argument
    for (int i = 1; i <= 10; i++)
    {
        printf("%dx%d=%d\n", n, i, n*i);
    } 
}
