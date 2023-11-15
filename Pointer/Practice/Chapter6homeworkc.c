// Write a program in C to print all the letters in english alphabet using a pointer.
// wrote the program without using a pointer
// I later write it with a pointer
#include <stdio.h>
void printing(void);

void main(void) {
    char alph;
    printing();
    // printf("%c\n", alph);
}

void printing(void) {
    for (char alph='A'; alph<=90; alph++) {
        printf("%c\t\t", alph);
    }
}
// int printing(char *alph);

// void main(void) {
//     char alph='A';
//     printing(&alph);
// }

// int printing(char *alph) {
//     for (*alph; *alph<=90; *alph++) {
//         printf("%c\n", *alph);
//     }
// }
