// Write a C program to find cube of any number using function.
# include <stdio.h>

int cube (int n)
{
    return n*n*n;
}

int main ()
{
    int n;
    printf("Input any number: ");
    scanf("%d", &n);
    printf("Cube of %d = %d\n", n, cube(n));
    return 0;
}