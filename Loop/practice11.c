// Write a program to check if a number is prime or not.
#include<stdio.h>
int main () {
    int temp;
    // int num = 9;
    int n;
    printf("Enter your number: ");
    scanf("%d", &n);

    // my code
    for (int i = 2; i<n; i++)               // it will start from i = 2 and run until i is less than n.
    {
        temp = n % i;                       // temp will store every dividation of n with each natural number starting from 2 to 1 less than n.
        // printf("%d\n",temp);             // (prottek loop er vag sesh ta print kore check korlam ki vabe kaj kore) ekhon jehuto program banay falaisi eitar dorkar nai tai comment out kore dilam.
        if (temp == 0) {                    // vagsesh jodi 0 hoy tahole not prime ar function break korbe; ar temp ==0 jehuto nijer condition o print hobe na 
            printf("Not prime\n");
            break;
        }
    }
    if (temp != 0 && n == 1 || n == 0) {    // loop theke ber hobar pore vagsesh jodi temp == 0 na hoy ar(&&) n er value jodi 0 or(||) 1 hoy tahole not prime print korbe.
        printf("Not Prime\n");
    }
    else if ( temp != 0 ) {                 // ar jodi vangsesh 0 na hoy taile print korbe prime.
        printf("Prime\n");
    }
    return 0;
}

/*ei program ta eivabe banano hoise jeno user jei digit ta input dey oita jodi 0 ar 1 hoy tahole automatic not prime print korbe
ar onno digit gulo jodi input dey oigula jodi 2 theke inputed vaule er ager number porjonto jekono number diye nis-seshe bivajito hoy
tahole not prime print kore break korbe, ar na hole temp er value at least 1 thakbe jeita pore loop seshe niche ashle condition onushare prime
print korbe*/
    
    
    // temp = (n*n)-1;
    // if (temp % 24 == 0) {
    //     printf("%d is a prime number.",n);
    // }
    // else if (n== 2 || n==3) {
    //     printf("%d is a prime number.",n);
    // }
    // else {
    //     printf("%d is not a prime number.",n);
    // }



    // for (i = 2; i <= num / 2; i++)
    // {
    //     // check if num is divisible by any number.
    //     if (num % i == 0)
    //     {
    //         temp++;
    //         break;
    //     }
    // } 
    // // check for the value of temp and num. 
    // if (temp == 0 && num != 1)
    // {
    //     printf("%d is a Prime number", num);
    // }
    // else
    // {
    //     printf("%d is not a Prime number", num);
    // }