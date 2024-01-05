// work in progress
#include <stdio.h>
void pattern (int n) {
    int diff;
    if (n<5)
    {
        diff = 1;
    }
    else
    {
        diff = 1+n/5;
    }
    
    for (int i = 1; i <= n*2+diff; i++)
    {
        for (int j = 1; j < n*2; j++)
        {
            if (i<3 && j<diff)
            {
                printf(" ");
                diff--;
            }
            // else if ()
            // {
            //     /* code */
            // }
            
        }
        
    }
    
}