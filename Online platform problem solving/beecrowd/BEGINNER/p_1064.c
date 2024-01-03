#include <stdio.h>
 
int main() {
 
    double n[6], sum = 0;
    int counter = 0;
    
    for (int i = 0; i < 6; i++)
    {
        scanf("%lf", &n[i]);
        if (n[i]>0)
        {
            counter++;
            sum += n[i];
        }
    }
    sum /= counter;
    printf("%d valores positivos\n", counter);
    printf("%.1lf\n", sum);
    
    return 0;
}