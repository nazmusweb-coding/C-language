// recursion function
#include<stdio.h>
// recursion function declaration/prototype
void printsomething(int count);

int main() {
    // recursion function call
    printsomething(5);
    return 0;
}

// recursion function definition
void printsomething(int count) {
    if (count==0) {
        return;
    }
    printf("%d", count); // printf("%d", count); // if i write this line before printsomething(count-1) it will print 54321
    printsomething(count-1);
    // if i write printf("%d", count); this line  after printsomething(count-1) it will print 12345
    //printf("%d", count);
}