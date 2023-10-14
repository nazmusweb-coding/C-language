#include<stdio.h>
int main () {
    for (int i = 1; i<=10; i++) {
        if (i == 6) {               // continue will skip 6 and move onto next.
            continue;
        }
        printf("%d\n", i);
    }
    return 0;
}