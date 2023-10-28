#include <stdio.h>
int main() {
    int i = 4;
    double d = 4.0;
    char s[] = "HackerRank ";
    int a;
    double b;
    char c[100];
    scanf("%d", &a);
    scanf("%lf", &b);
    scanf("%*[\n]%[^\n]", c); // important line
    printf("%d\n", i+a);
    printf("%0.1lf\n", d+b);
    printf("%s%s", s, c);
    return 0;
}