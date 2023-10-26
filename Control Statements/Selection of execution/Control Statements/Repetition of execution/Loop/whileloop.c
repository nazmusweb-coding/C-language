#include<stdio.h>
int main() {
    int i = 1;                      // I have to declare the counter variable before and outsite the while loop
    while (i<=5)                    // I have to write the condition in first bracket
    {
        printf("Hello World\n");    // the statement for what I want to use loop
        i++;                        // I have to write the updation here inside the while loop //without this line the loop will be a infinite loop
    }
    return 0;
}