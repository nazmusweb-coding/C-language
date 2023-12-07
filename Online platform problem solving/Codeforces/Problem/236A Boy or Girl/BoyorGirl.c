#include <stdio.h>

int main ()
{
    char ch;
    int i = 0, frequency[26] = {0};
    while (ch!='\n')
    {
        scanf("%c", &ch);
        int index = (int)ch;
        frequency[index-=97]++;

        if (frequency[index]<=1) i++;
    }

    if ((i)%2!=0) printf("IGNORE HIM!");
    else printf("CHAT WITH HER!");
    
    return 0;
}