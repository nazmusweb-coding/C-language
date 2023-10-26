// Write a C program to calculate profit or loss.
#include <stdio.h>
void profit_or_loss(int cost_price, int selling_price);
void main() {
    int whole_sale_price, retail_price;
    printf("Input cost price: ");
    scanf("%d", &whole_sale_price);
    printf("Input selling price: ");
    scanf("%d", &retail_price);
    profit_or_loss(whole_sale_price, retail_price);
}
void profit_or_loss(int cost_price, int selling_price) {
    int profit = selling_price - cost_price;
    int loss = cost_price - selling_price;
    
    if (selling_price>cost_price)
    {
        printf("Profit: %d", profit);
    }
    else if (cost_price>selling_price)
    {
        printf("Loss: %d", loss);
    }
    else
    {
        printf("No profit, no loss");
    }
}