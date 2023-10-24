// Print the numbers from 0 to n, if n is given by user, n = 4

#include<stdio.h>
int main() {
    int i = 0;                      // the program is build for printing values from 0 so i = 0
    int n;                          // declearing n variable
    printf("Enter the n value: ");  // since n is given by user i am asking your to input n 
    scanf("%d", &n);                // taking input from user for n 
    while (i<=n)                    // starting while loop, condition is when the i(counter variable) will be less than or equal to n
    {
        printf("%d\n", i);          // printing value of i till n
        i++;                        // updation, where it means(i = i + 1), it will print loops increasing the counter variable value each time by 1
    }
    return 0;
}
// same program using for
//  for(int i = 0; i <= n; i++) {
//     printf("%d\n", i);
//  }