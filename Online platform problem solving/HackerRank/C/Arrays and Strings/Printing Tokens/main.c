#include <stdio.h>
#include <string.h>
int main() {
    char s[1000];
    fgets(s, 1000, stdin);
    int length = strlen(s);
    if (length>=1 && length<=1000) {
        for (int i = 0; s[i]!='\0'; i++) {
            char ch = s[i];
            printf("%c", ch);
            if (ch==' ') {
                printf("\n");
            }
        }
    }
    return 0;
}