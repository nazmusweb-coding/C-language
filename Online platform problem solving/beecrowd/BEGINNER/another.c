
#include <stdio.h>
int main()
{
    float n;
    scanf("%f", &n);
    if (n <= 400.0)
        printf("Novo salario: %.2fnReajuste ganho: %.2fnEm percentual: 15 %%n", n * 1.15, n * 0.15);
    else if (n <= 800.0)
        printf("Novo salario: %.2fnReajuste ganho: %.2fnEm percentual: 12 %%n", n * 1.12, n * 0.12);
    else if (n <= 1200.0)
        printf("Novo salario: %.2fnReajuste ganho: %.2fnEm percentual: 10 %%n", n * 1.10, n * 0.10);
    else if (n <= 2000.0)
        printf("Novo salario: %.2fnReajuste ganho: %.2fnEm percentual: 7 %%n", n * 1.07, n * 0.07);
    else
        printf("Novo salario: %.2fnReajuste ganho: %.2fnEm percentual: 4 %%n", n * 1.04, n * 0.04);
    return 0;
}
