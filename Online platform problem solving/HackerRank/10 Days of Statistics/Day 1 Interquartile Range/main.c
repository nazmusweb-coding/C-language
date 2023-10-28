#include <stdio.h>
#include <math.h>
int main() {
    int n, temp, index = 0, sum_of_freqs = 0;

    /* The Quartiles */
    double Q1, Q3, IR;
    scanf("%d", &n);
    int values[n], freqs[n];
    if (n<=50 && n>=5)
    {
        /* Taking input for value[] */
        for (int i = 0; i<n; i++)
        {
            scanf("%d", &values[i]);
            if (values[i]>100 || values[i]<=0)
            {
                return 1;
            }
        }

        /* Taking input for freqs[] */
        for (int i = 0; i<n; i++)
        {
            scanf("%d", &freqs[i]);
            sum_of_freqs = sum_of_freqs+ freqs[i];
            if (freqs[i]>pow(10, 3) || freqs[i]<=0)
            {
                return 1;
            }
        }

        /* Declared this variable later because of the element number */
        int S[sum_of_freqs];

        /* For creating the new array S[] */
        for (int i = 0; i<n; i++)
        {
            if (freqs[i]>=1)
            {
                for (int j = 0; j<freqs[i]; j++)
                {
                    S[index] = values[i];
                    index = index + 1;
                }
            }
            
        }

        /* For sorting */
        for (int i = 0; i<sum_of_freqs; i++)
        {
            for (int j = 0; j<sum_of_freqs-1; j++)
            {
                if (S[j]>S[j+1])
                {
                    temp = S[j+1];
                    S[j+1] = S[j];
                    S[j] = temp;
                }
            }
        }

        /* For calculating the interquartile range based on the element kind(even or odd) */
        if (sum_of_freqs%2==0)
        {
            temp = sum_of_freqs/2;
            if (temp%2==0)
            {
                temp = temp/2;
                Q1 = (double)(S[temp-1] + S[temp])/2;
                Q3 = (double)(S[sum_of_freqs-temp-1] + S[sum_of_freqs-temp])/2;
            }
            else
            {
                temp = temp/2;
                Q1 = (double)S[temp];
                Q3 = (double)S[sum_of_freqs-temp-1];
            }
        }
        else
        {
            temp = sum_of_freqs/2;
            if (temp%2==0)
            {
                temp = temp/2;
                Q1 = (double)(S[temp-1]+S[temp])/2;
                Q3 = (double)(S[sum_of_freqs-temp-1]+S[sum_of_freqs-temp])/2;
            }
            else
            {
                temp = temp/2;
                Q1 = (double)S[temp];
                Q3 = (double)S[sum_of_freqs-temp-1];
            }
        }

        /* The interquartile range(IR) */
        IR = Q3 - Q1;
        printf("%0.1lf", IR);
    }
    
    return 0;
}