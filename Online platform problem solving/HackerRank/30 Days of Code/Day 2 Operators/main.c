#include <stdio.h>
void total(double meal_cost, int tip_percent, int tax_percent);
int main() {
    double a;
    int b, c;
    scanf("%lf%d%d", &a, &b, &c);
    total(a, b, c);
    return 0;
}
void total(double meal_cost, int tip_percent, int tax_percent) {
    double tip = ((double)tip_percent/100)*meal_cost;
    double tax = ((double)tax_percent/100)*meal_cost;
    double total_cost = meal_cost + tip + tax;
    printf("%0.0lf", total_cost);
}