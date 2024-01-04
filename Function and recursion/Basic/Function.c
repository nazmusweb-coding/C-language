/*This is the traditional way of writing function
first declaring funtion, second calling them in main function
third at last function definition*/

#include <stdio.h>
// declaration/prototype
void printHello();

int main() {
    printHello(); // function call
    printHello();
    printHello();
    return 0;
}

// function definition
void printHello() {
    printf("Hello!\n");
    printf("My name is Sakib.\n");
}