#include <stdio.h>
#include <string.h>

int main() {

    char string[1001];
    int freq[10] = {0}, len;

    fgets(string, 1001, stdin);
    len = strlen(string);
    
    // because fgets also take \n new line in the string so it will count one len extra
    if (len<2 || len>1001) {
        return 1;
    } 

    for (int i = 0; i < len; i++) {
        if (string[i]>=48 && string[i]<=57) 
        {
            freq[string[i]-48]++;
        }

    }

    for (int i = 0; i < 10; i++) {
        printf("%d ", freq[i]);
    }
    
    return 0;
}