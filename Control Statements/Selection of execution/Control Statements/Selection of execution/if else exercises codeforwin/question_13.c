// Write a C program to count total number of notes in given amount.
#include <stdio.h>
void amount_in_notes(int amount);
void main() {
    int taka;
    printf("Input amount: ");
    scanf("%d", &taka);
    amount_in_notes(taka);
}
void amount_in_notes(int amount) {   
    int counter = amount;
    printf("Total number of notes: \n"); 
    while (amount>0)
    {
        if (counter>=1000)
        {
            counter = amount%1000;
            amount = amount/1000;
            printf("1000: %d\n", amount);
        }
        else if (counter>=500)
        {
            counter = amount%500;
            amount = amount/500;
            printf("500: %d\n", amount);
        }
        else if (counter%200==0)
        {
            counter = amount%200;
            amount = amount/200;
            printf("200: %d\n", amount);
        }
        else if (counter%100==0)
        {
            counter = amount%100;
            amount = amount/100;
            printf("100: %d\n", amount);
        }
        else if (counter%50==0)
        {
            counter = amount%50;
            amount = amount/50;
            printf("50: %d\n", amount);
        }
        else if (counter%20==0)
        {
            counter = amount%20;
            amount = amount/20;
            printf("20: %d\n", amount);
        }
        else if (counter%10==0)
        {
            counter = amount%10;
            amount = amount/10;
            printf("10: %d\n", amount);
        }
        else if (counter%5==0)
        {
            counter = amount%5;
            amount = amount/5;
            printf("5: %d\n", amount);
        }
        else if (counter%2==0)
        {
            counter = amount%2;
            amount = amount/2;
            printf("2: %d\n", amount);
        }
        else if (counter%1==0)
        {
            counter = amount%1;
            amount = amount/1;
            printf("1: %d\n", amount);
        }   
    }
    
}