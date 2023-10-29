#include <stdio.h>
#include <math.h>
int main() {

    /* n = number of elements */
    int n;
    scanf("%d", &n);
    int arr[n];

    /* For accurate calculation(hence error margin of +-1 will be tolerated) I took float type in every calculation */
    float mean, sd, sum = 0, sum_of_squared = 0;
    if (n<=100 && n>=5)
    {
        /* Taking input of arr[n] */
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &arr[i]);
            sum = sum + arr[i];
            if (arr[i]>pow(10, 5) || arr[i]<=0)
            {
                /* Exit */
                return 1;
            }
        }

        /* Calculation of mean */
        mean = sum/n;

        /* Calculation of squared distance*/
        for (int i = 0; i < n; i++)
        {
            sum_of_squared = sum_of_squared + pow((arr[i]-mean), 2);
        }
        sd = sqrt(sum_of_squared/n);
        printf("%0.1f", sd);
    }
    
}