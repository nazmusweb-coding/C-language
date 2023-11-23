// we will take multiple input in a array and print them locationwise one by one.
// this program is an very important lesson note
// Traverse an array using pointer
#include<stdio.h>
void main (void) {
    int marks[100];

    //  input
    /*  gave ptr pointer access of index 0
        so it can take input form user
        in a loop by increasing pointer's index one by one */
    int *ptr = &marks[0];                                                   // this line is very very important line
    for (int i = 0; i <= 10; i++) {
        printf("%d index: ", i);
        scanf("%d", (ptr+i));                                               // dont need to use ampersand when working with pointer
    }
    // for output
    /*  after taking input for every index we need,
        i want to print value that i entered for each
        index in an array, so again i wrote a loop for
        printing each pointer's value by increasing pointer's
        index one by one so i can print them all one after another */
    for (int i = 0; i <= 10; i++) {
        printf("%d index: ", i);
        printf("%d\n", *(ptr+i));
    }
}