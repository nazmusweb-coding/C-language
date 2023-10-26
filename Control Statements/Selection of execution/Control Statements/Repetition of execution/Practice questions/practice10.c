// Search on what a nested loop is and Print this pattern using it.
#include<stdio.h>
int main () {
    int end = 4;                        // declared loop limite range variable end.
    int i = 1;                          // declared initial value of counter variable i.
    for (i =1; i <=end; i++){           // the loop will run till i = 4. this loop is responsible for row/loop.
        printf("\n");                   // it will print a next line for nested loop command.
        for (int j =1; j<=4; j++) {     // it is a loop that is responsible for every columns in a row.
            printf("* ");
        }
    }
    // while (i<=end)
    // {
    //     printf("\n");
    //     int j = 1;
    //     while (j<=4)
    //     {
    //         printf("* ");
    //         j++;
    //     }
    //     i ++;
    // }
    // do {
    //     printf("\n");
    //     int j = 1;
    //     do {
    //         printf("* ");
    //         j++;
    //     } while (j<=4);
    //     i++;
    // } while (i<=end);

    return 0;
}