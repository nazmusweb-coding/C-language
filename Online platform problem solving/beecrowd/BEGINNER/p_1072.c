#include <stdio.h>
 
int main() {
 
    int a, b, in = 0, out = 0;
    scanf("%d", &a);
    if (a<10000)
    {
        for (int i = 0; i<a; i++)
        {
            scanf("%d", &b);
            if (b>-10000000 && b<10000000)
            {
                if (b>=10 && b<=20)
                {
                    in++;
                }
                else out++;
            }
        }
    }
    printf("%d in\n", in);
    printf("%d out\n", out);
    return 0;
}