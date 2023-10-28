#include <stdio.h>
int main() {
    int n, temp, Q1, Q2, Q3, index;
    scanf("%d", &n);
    int arr[n];
    if (n<=50 && n>=5)
    {
        /* Taking Input */
        for (int i = 0; i<n; i++)
        {
            scanf("%d", &arr[i]);

            /* Condition for input */
            if (arr[i]>100 || arr[i]<=0)
            {
                return 1;
            }       
        }

        /* Sorting array */
        for (int i = 0; i<n; i++)
        {
            for (int j = 0; j<n-i-1; j++)
            {
                if (arr[j]>arr[j+1])
                {
                    temp = arr[j+1];
                    arr[j+1] = arr[j];
                    arr[j] = temp;
                }       
            }    
        }
        
        /* This part was to check the internal sorting and for understanding the calculation */
        // printf("\n");
        // for (int i = 0; i < n; i++)
        // {
        //     printf("%d\t", arr[i]);
        //     if (i==10)
        //     {
        //         printf("\n");
        //     }     
        // }
        // printf("\n");

        /* Math is based on even and odd number of array size(n) */
        if (n%2==0)
        {
            //OK
            index = n/2;
            Q2 = (arr[index]+arr[index-1])/2;
            temp = (n)/2;
            if (temp%2==0)
            {
                //OK
                index = temp/2;
                Q1 = (arr[index]+ arr[index-1])/2;
                Q3 = (arr[n-index-1]+ arr[(n-index)])/2;
            }
            else
            {
                //OK
                index = temp/2;
                Q1 = arr[index];
                Q3 = arr[n-index-1];
            }      
        }
        else
        {
            index = n/2;
            Q2 = arr[index];
            temp = (n)/2;
            if (temp%2==0)
            {
                //OK
                index = temp/2;
                Q1 = (arr[index] + arr[index-1])/2;
                Q3 = (arr[n-index-1] + arr[n-index])/2;
            }
            else
            {
                //OK
                index = temp/2;
                Q1 = arr[index];
                Q3 = arr[n-index-1];
            }
        }
        printf("%d\n%d\n%d", Q1, Q2, Q3);
    }
    return 0;
}