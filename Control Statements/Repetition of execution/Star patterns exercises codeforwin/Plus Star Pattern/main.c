#include <stdio.h>
void pattern (int n) {
    for (int i = 1; i < n*2; i++)
    {
        for (int j = 1; j < n*2; j++)
        {
            // if n*2-1 is odd then here is the logic for printing 1 line plus
            if ((n*2-1) & 1)
            {
                if(j==(n*2)/2 || i==(n*2)/2)
                {
                    printf("+");
                }
                else
                {
                    printf(" ");
                }
            }
            // if n*2-1 is even then here is the logic for printing 2 line plus
            else
            {
                if (j==(n*2)/2 || j==(n*2)/2+1 || i==(n*2)/2 || i==(n*2)/2+1)
                {
                    printf("+");
                }
                else
                {
                    printf(" ");
                }
            }

        }
        printf("\n");
    }
    
}
int main () {
    int n;
    scanf("%d", &n);
    pattern(n);
    return 0;
}