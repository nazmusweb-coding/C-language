// this is efficient 
// important

#include <stdio.h>
#include <string.h>

#define MAX_SIZE 100 // Maximum string size

int findWord(const char *str, const char *word) {
    int strLen = strlen(str);
    int wordLen = strlen(word);
    int i, j;

    for (i = 0; i <= strLen - wordLen; ++i) {
        for (j = 0; j < wordLen; ++j) {
            if (str[i + j] != word[j]) {
                break;
            }
        }
        if (j == wordLen) {
            return i; // Return the index where the word is found
        }
    }

    return -1; // Return -1 if the word is not found
}

int main() {
    char str[MAX_SIZE], word[MAX_SIZE];

    printf("Input string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0'; // Remove trailing newline if present

    printf("Input word to search: ");
    fgets(word, sizeof(word), stdin);
    word[strcspn(word, "\n")] = '\0'; // Remove trailing newline if present

    int index = findWord(str, word);

    if (index != -1) {
        printf("'%s' is found at index %d\n", word, index);
    } else {
        printf("'%s' is not found.\n", word);
    }

    return 0;
}