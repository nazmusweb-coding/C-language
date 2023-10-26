#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
	
    int n, sum = 0;
    scanf("%d", &n);
    
    if (n<=99999 && n>=10000)
    {
        while (n>0)
        {
            int remain = n%10;
            n = n/10;
            sum = sum + remain;
        }
        printf("%d", sum);
    }
    
    return 0;
}