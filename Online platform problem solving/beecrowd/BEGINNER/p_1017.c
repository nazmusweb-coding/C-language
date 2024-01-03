#include <stdio.h>
 
int main() {
 
    int time, speed;
    double fuel;
    scanf("%d%d", &time, &speed);
    fuel = (double)(time*speed)/12;
    printf("%0.3lf\n", fuel);
 
    return 0;
}