// Calculate the sum of all numbers between 5 and 50. (including 5 to 50)
#include<stdio.h>
int main () {
    int sum = 0;                    // declared sum variable which's value is 0, it will help us to calculate the whole sum. 
    for (int i = 5; i<=50; i++) {   // counter variable value starts with 5, condition is run loop till i is less than or equal to 50, updation is i++ [i = i + 1] for every loop.
        sum = sum + i;              // adding every value of i in each loop with 0 [0+5+6+7+8+9+10] into sum variable.
    }
    printf("Sum: %d", sum);         // after successfully coming out of loop it will print the total sum value of looped numbers form 5 to 50.
    return 0;
}