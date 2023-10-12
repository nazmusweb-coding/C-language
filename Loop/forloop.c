#include<stdio.h>
int main() {
    // increment operator
    // ++i (pre increment)
    // i++ (post increment)
    // decrement operator
    // --i (pre decrement)
    // i-- (post decrement)
    /* int i = 1;
        printtf("%d\n", i++); use, then increase output: 1
        printtf("%d/n", i); output: 2
    */
     /* int i = 1;
        printtf("%d\n", ++i); increase, then use output: 2
        printtf("%d/n", i); output: 2
    */   
    for(int i=1; i<=100; i=i+1) {
        printf("%d\n",i);
    }
    return 0;
}