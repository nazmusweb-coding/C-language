#include <stdio.h>
 
int main ()
{
    int counter = 0;
    double array[6];
    
    for (int i=0; i<6; i++)
    {
        scanf("%lf", &array[i]);
        if (array[i]>0) counter++;
    }
    printf("%d valores positivos\n", counter);
    
    return 0;
}