// Write a program to print prime numbers in a range.
#include<stdio.h>
int main () {
    // declared a variable named 'm' where we will take input of starting value of the range.
    int m;
    // declared a variable named 'n' where we will take input of ending value of the range.
    int n;
    // declared a variable named 'temp' where we will store the remains of dividations.
    int temp;
    // asking for a range and taking input.
    printf("Enter the range: \n");
    scanf("%d%d", &m, &n);

    // here we used nested loop to divide each number with each number to find out the prime number only and print them out of a range.
    // so the condition for being a prime number is, it must have 2 factors[1 and the number itself], for example 3 is dividable by 1 and 3 only.
    // on the other hand, if a number is dividable by any other number expect 1 and the number itself, then it is not a prime number because it has more factors than 2 factors, for example 4 is dividable 1,2, and 4.(4 has 3 factors so it isnt a prime number.)
    // therefore we made the loop like if a number is dividable(temp == 0) by anyother number with (2 to <n), it is not a prime number so it will break the dividation and move on to next number contained in i.
    // if it is not divided(temp != 0) by any number till the very end, it will come out of the loop, and print the condition that it is a prime number.
    // we commnaded the program to skip i==1 by continue statement, because 1 isn't dividable by any other number except itself, and it also doesn't fulfill the condintion of being a prime number which  is having 2 factors only, but it has only one factor.

    for(int i = m; i <= n; i++) {
        for(int j=2; j < i; j++) {
            temp = i%j;
            // printf("for %d divided by %d = %d\n", i, j, temp);           // this one statement helped to understand how the loop is working actually. so now the program is finished so it is commented out.
            // if i is dividable by anynumber here, it means it is not a prime number, so if it is dividabed by any number and there are no remains, so it will break the loop. so we are using break statement to break the loop and move onto next number.
            if (temp == 0) { 
                break;
            }
        }
        // 1 is an exeptional number so we have to skip it as per our condition for prime numbers in this program. so we are using continue statement to skip it.
        if (i == 1) {
            continue;
        }
        if (temp != 0) {
            printf("\n%d is a prime number.", i);
        }
    }
    printf("\n\nThese are prime numbers in range of %d to %d", m, n);
    return 0;
}

// everything is same as prime number program(Chapter4homeworkb.c), but here we used nested loop to print prime numbers of a range.
// the main idea of nested loop came from printing pattern program(Chapter4homeworka.c)