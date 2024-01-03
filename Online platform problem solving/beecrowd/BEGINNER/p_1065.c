#include <stdio.h>
 
int main() {
 
    int n[5], counter = 0;
    for (int i = 0; i<5; i++)
    {
        scanf("%d", &n[i]);
        if (n[i]%2==0)
        {
            counter++;
        }
    }
    printf("%d valores pares\n", counter);
    return 0;
}