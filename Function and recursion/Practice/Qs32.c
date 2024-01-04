// Print "Hello World" 5 times
#include<stdio.h>
// recursive function declaration/prototype
void printHW(int count);

int main() {
    // recursive funtion call
    printHW(5);
    return 0;
}

// recursive function definition
void printHW(int count) {
    // base case
    // if count is equal to 0, it will break
    if(count==0) {
        return;
    }
    printf("Hello World\n");
    // recursive function call itself
    printHW(count-1);
}