// Print all the odd numbers from 5 to 50

#include<stdio.h>
int main () {
    for(int i = 5; i <= 50; i++) {
        if (i%2==0) {               // it will skip all the even number which are divided by 2 and move onto odd numbers.
            continue;               // used for skipping even numbers and for moving onto odd numbers and printing them.
        }
        printf("%d\n", i);
    }
    return 0;
}