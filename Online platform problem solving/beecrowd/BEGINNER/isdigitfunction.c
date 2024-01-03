// I used isdigit() function from ctype.h library so i tried to definition it.
// I used isdigit() in p_1048.c

#include <stdio.h>

int main ()
{
    char a;
    scanf("%c", &a);

    if (a<48 || a>57)
    {
        printf("0");
    }
    else printf("1");
    
}