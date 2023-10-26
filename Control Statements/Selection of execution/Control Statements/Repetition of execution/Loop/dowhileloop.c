#include<stdio.h>
int main() {
    int i = 1;             // I have to declare the counter variable before and outsite the do-while loop
    do {
        printf("%d\n", i); // the statement for what you want to use loop
        i++;               // I have to write the updation here inside the do-while loop //without this line the loop will be a infinite loop
    } while (i<=5);        // I have to write the condition in first bracket
    return 0;
}