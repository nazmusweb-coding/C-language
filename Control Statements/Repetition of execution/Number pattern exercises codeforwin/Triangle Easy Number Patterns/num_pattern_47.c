#include <stdio.h>
void pattern(int n) {
    int count = 1, print_count = 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= count; j++, print_count++)
        {
            if (print_count == 10)
            {
                print_count = 1;
            }
            
            printf("%d ", print_count);
        }
        count*=2; // for the range we need like 1 2 4 8 16...
        printf("\n");
    }
    
}
int main () {
    int n;
    printf("Input N: ");
    scanf("%d", &n);
    pattern(n);
    return 0;
}