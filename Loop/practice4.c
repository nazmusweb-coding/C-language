// Keep taking numbers as input from the user until users enters an odd number.
#include<stdio.h>
int main()
{
    int n;
    // when it is matter of taking input from user with loop its prefered to use do-while loop.
    
    do {
        printf("Enter the value of n: ");       // asking for input.
        scanf("%d", &n);                        // taking input and storing in n variable.
        printf("%d\n", n);                      // printing the value of n which one is recently taken as input from the user.
        if (n % 2 != 0) {                       // if value of n is odd. this do-while loop will break and the program will stop.
            break;
        }
    } while (1);                                // made an infinit loop my giving the condition 1(true). only one way to escape this loop is to break or stop program by the user
    printf("Thank you");                        // coming out of the loop it will print this and close the program.
    return 0;
}