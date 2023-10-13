// Print the sum of first n Natural Numbers, n=4, also print them in reverse.(using for loop)
#include<stdio.h>

int main() {
    int sum = 0;
    int n;
    printf("Enter value of n: ");
    scanf("%d", &n);
    for(int i = n; i>=1; i--) {
        sum = sum + i;
        printf("%d\n", i);
    }
    // for(int i=1, j=n; i<=n && j>=1; i++, j--) { //special loop using multiple variable
    //     sum = sum + i;
    //     printf("%d\n", j);
    // }
    printf("Sum : %d\n", sum);

    return 0;
}

// in here we are doing everything in one loop