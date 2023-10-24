// Print the sum of first n Natural Numbers, n=4, also print them in reverse.(using dowhileloop)
#include<stdio.h>
int main() {
    int i = 1;                          // declared i variable with value of 1.
    int n;                              // declared n variable.
    int sum = 0;                        // declared sum variable with value of 0.
    printf("Enter the value of n: ");   // asking for value of n variable.
    scanf("%d", &n);                    // taking value input of n variable.
    
    do{
        sum = sum + i;                  // gathering every natural number in sum and calculating their sum together.
        i++;                            // (post increment)[1,2,3,4,5...] Updation,command to run the loop
    } while (i<=n);                     // run the loop till i is less than or equal to n.
    
    printf("Sum: %d\n", sum);           // printing the total sum of first n Natural Numbers.

    do{
        printf("%d\n",n);               // printing numbers in reverse using loop
        n--;                            // (post decrement)[...5,4,3,2,1] Updation,command to run the loop in reverse
    } while (n>=1);                     // run the loop till n is less than or equal to 1.

    return 0;    
}