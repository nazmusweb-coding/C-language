// this is the ridiculous statement i have ever seen in my life.
#include<stdio.h>
void main() {
    int n;
    printf("This is an statement that ghaura told us to learn.\n");
    printf("Enter your desired number: ");
    scanf("%d", &n);
    switch (n)
    {
    case 1: goto start;
        break;
    case 2: goto stop;
        break;
    default: goto def;
        break;
    }
    // this is where the goto statement will jump
    start:
        printf("HI!\n");
    stop:
        printf("Bye\n");
    def:
        printf("How are you\n");
    // but as tested, goto statement is ugly and doesn't obey control flow
}