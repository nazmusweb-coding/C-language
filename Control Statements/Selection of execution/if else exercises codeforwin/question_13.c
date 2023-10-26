// Write a C program to count total number of notes in given amount.
// Important
#include <stdio.h>
void amount_in_notes(int amount);
void main() {
    int taka;
    printf("Input amount: ");
    scanf("%d", &taka);
    amount_in_notes(taka);
}
void amount_in_notes(int amount) {   
    int counter, count=amount;
    printf("Total number of notes: \n");
    counter = amount%1000;
    if (counter!=amount)
    {
        amount = amount%1000;
        printf("1000: %d\n", count/1000);
        count = count % 1000;
    }
    counter = amount%500;
    if (counter!=amount)
    {
        amount = amount%500;
        printf("500 : %d\n", count/500);
        count = count % 500;
    }
    counter = amount%200;
    if (counter!=amount)
    {
        amount = amount%200;
        printf("200 : %d\n", count/200);
        count = count % 200;
    }
    counter = counter%100;
    if (counter!=amount)
    {
        amount = amount%100;
        printf("100 : %d\n", count/100);
        count = count % 100;
    }
    counter = amount%50;
    if (counter!=amount)
    {
        amount = amount%50;
        printf("50  : %d\n", count/50);
        count = count % 50;
    }
    counter = amount%20;
    if (counter!=amount)
    {
        amount = amount%20;
        printf("20  : %d\n", count/20);
        count = count % 20;
    }
    counter = amount%10;
    if (counter!=amount)
    {
        amount = amount%10;
        printf("10  : %d\n", count/10);
        count = count % 10;
    }
    counter = amount%5;
    if (counter!=amount)
    {
        amount = amount%5;
        printf("5   : %d\n", count/5);
        count = count % 5;
    }
    counter = amount%2;
    if (counter!=amount)
    {
        amount = amount%2;
        printf("2   : %d\n", count/2);
        count = count % 2;
    }
    counter = amount%1;
    if (counter!=amount)
    {
        amount = amount%1;
        printf("1   : %d\n", count/1);
        count = count % 1;
    }
}

// Efficiently: 
// #include <stdio.h>

// int main()
// {
//     int amount;
//     int note500, note100, note50, note20, note10, note5, note2, note1;
    
//     /* Initialize all notes to 0 */
//     note500 = note100 = note50 = note20 = note10 = note5 = note2 = note1 = 0;


//     /* Input amount from user */
//     printf("Enter amount: ");
//     scanf("%d", &amount);


//     if(amount >= 500)
//     {
//         note500 = amount/500;
//         amount -= note500 * 500;
//     }
//     if(amount >= 100)
//     {
//         note100 = amount/100;
//         amount -= note100 * 100;
//     }
//     if(amount >= 50)
//     {
//         note50 = amount/50;
//         amount -= note50 * 50;
//     }
//     if(amount >= 20)
//     {
//         note20 = amount/20;
//         amount -= note20 * 20;
//     }
//     if(amount >= 10)
//     {
//         note10 = amount/10;
//         amount -= note10 * 10;
//     }
//     if(amount >= 5)
//     {
//         note5 = amount/5;
//         amount -= note5 * 5;
//     }
//     if(amount >= 2)
//     {
//         note2 = amount /2;
//         amount -= note2 * 2;
//     }
//     if(amount >= 1)
//     {
//         note1 = amount;
//     }

//     /* Print required notes */
//     printf("Total number of notes = \n");
//     printf("500 = %d\n", note500);
//     printf("100 = %d\n", note100);
//     printf("50 = %d\n", note50);
//     printf("20 = %d\n", note20);
//     printf("10 = %d\n", note10);
//     printf("5 = %d\n", note5);
//     printf("2 = %d\n", note2);
//     printf("1 = %d\n", note1);

//     return 0;
// }