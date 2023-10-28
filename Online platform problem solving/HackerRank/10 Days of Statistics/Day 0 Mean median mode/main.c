#include <stdio.h>
#include <math.h>

int main() {
    int n;
    scanf("%d", &n);
    int mode, middle, temp, index, sum = 0, storage[n], occurrence[n];
    float mean, median;
    if (n<=2500 && n>=10)
    {
        /* Taking Input */
        for (int i = 0; i<n ; i++)
        {
            scanf("%d", &storage[i]);
            if (storage[i]<0 || storage[i]>pow(10, 5))
            {
                return 1;
            }
        }

        /* Total sum of array's each index value */
        for (int i = 0; i<n ; i++) {
            sum = sum + storage[i];
        }
        /* Type casted and storing the mean/average */
        mean = (float)sum/n;

        /* To calculate the median, we need the elements of the array to be sorted in either non-increasing or non-decreasing order, here im sorting in non-decreasing order */
        for (int i = 0; i<n ; i++)
        {
            for (int j = 0; j<n-i-1 ; j++)
            {
                if (storage[j]>storage[j+1]) {
                    temp = storage[j];
                    storage[j] = storage[j+1];
                    storage[j+1] = temp;
                }
            } 
        }

        /* We then average the two middle elements only and only if the element number(n) is even. else if element number(n) is odd, it will average the middle element to calculate median */
        if (n%2==0)
        {
            middle = n/2;
            median = (float)(storage[middle-1] + storage[middle])/2;
        }
        else
        {
            middle = n/2;
            median = (float)storage[middle]/2;
        }

        /* Finding the number of occurrences of all the elements in the array */
        for (int i = 0; i<n ; i++)
        {
            occurrence[i] = 0;
            for (int j = 0; j<n; j++)
            {
                if (storage[i]==storage[j])
                {
                    occurrence[i] = occurrence[i] + 1;
                }  
            }
        }

        /* It will find the the maximum number of occurrences index for any number in the array. if some maximum number of occurrences are same then it will store the index of the array of the smallest one and will store the value as mode */
        for (int i = 0; i < 1; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (occurrence[i]>=occurrence[j])// = is a game changer here, for the smallest one. in case of multiple maximum number of occurences
                {
                    index = i;
                }
                else
                {
                    i = j;
                    index = j;
                }        
            }
            
        }
        mode = storage[index];

        /* Printing mean, median and mode on a new lines */
        printf("%0.1f\n%0.1f\n%d", mean, median, mode);
    }
    
    return 0;
}