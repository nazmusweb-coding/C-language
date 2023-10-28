#include <stdio.h>
int main() {
    int N;
    float mean, sum_of_W = 0, sum = 0;
    scanf("%d", &N);
    int X[N], W[N];
    if (N<=50 && N>=5)
    {
        /* Taking input for X[] */
        for (int i = 0; i<N ; i++)
        {
            scanf("%d", &X[i]);
            if (X[i]>100 || X[i]<=0)
            {
                return 1;
            }
        }

        /* Taking input for W[] */
        for (int i = 0; i<N; i++)
        {
            scanf("%d", &W[i]);      
            if (W[i]>100 || X[i]<=0)
            {
                return 1;
            }         
        }

        /* Real calculation here */
        for (int i = 0; i<N; i++)
        {
            sum = sum + (X[i]*W[i]);
            sum_of_W = sum_of_W + W[i];
        }
        mean = sum/sum_of_W;

        /* Printing the mean */
        printf("%0.1f", mean);
    }
    return 0;
}