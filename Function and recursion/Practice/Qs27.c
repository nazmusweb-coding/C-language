// Write 2 functions - one to print "Hello" & second to print "good bye".
#include<stdio.h>
// function declaration/prototype
void printHello();
void printBye();

int main() {
    printHello(); // function call
    printBye(); // function call
    return 0;
}

// function definition
void printHello() {
    printf("Hello\n");
}

void printBye() {
    printf("good bye\n");
}
