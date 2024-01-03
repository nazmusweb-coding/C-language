#include <stdio.h>
 
int main() {
 
    int N;
    scanf("%d", &N);
    int a[N];
    
    if (N<10000)
    {
        for (int i = 0; i<N; i++)
        {
            scanf("%d", &a[i]);
        }
        for (int i = 0; i < N; i++)
        {
            if (a[i]>0)
            {
                if (a[i]%2==0) printf("EVEN POSITIVE\n");
                else printf("ODD POSITIVE\n");
            }
            else if (a[i]<0)
            {
                if (a[i]%2==0) printf("EVEN NEGATIVE\n");
                else printf("ODD NEGATIVE\n");
            }
            else printf("NULL\n");
        }
    }
 
    return 0;
}