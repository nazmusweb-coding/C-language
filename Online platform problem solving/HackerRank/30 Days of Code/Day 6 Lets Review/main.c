#include <stdio.h>
#include <string.h>

int main ()
{
    int T, k = 0, l = 0;
    scanf("%d", &T);
    char s[T][10001], case_0[100], case_1[100];
    if (T>=1 && T<=10)
    {
        for (int i = 0; i < T ; i++)
        {
            scanf("%s", s[i]);
        }
        for (int i = 0; i < T; i++)
        {
            if (strlen(s[i])>=2 && strlen(s[i])<=10000)
            {
                for (int j = 0; s[i][j]!='\0'; j++)
                {
                    if (j%2==0)
                    {
                        case_0[k++] = s[i][j];
                    }
                    else 
                    {
                        case_1[l++] = s[i][j];
                    }
                }
                case_0[k]='\0';
                case_1[l]='\0';
                k = l = 0;
                printf("%s %s\n", case_0, case_1);
            }
            else    continue; 
        }
    }
    else    return 1;
    
    
    return 0;
}