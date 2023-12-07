#include <stdio.h>
int calculate_maximum_cycle_length(int n, int m) {//function definition
    if ((n>0 && m>0) && (n<10000 && m<10000))//constraints
    {
        /* temp_i is for calculation because we can't calculate with real i which is used in next loop */
        int temp_i, cycle_length, maximum_cycle_length = 0;//variable declaration
        for (int i = n; i <= m; i++)
        {
            /* for each integer number the cycle_lenght will be init with 1 and temp_i will be init with vale of i */
            cycle_length = 1, temp_i = i;
            while (temp_i!=1)
            {
                if (temp_i%2==1) temp_i = (3*temp_i + 1);
                else temp_i = temp_i/2;
                cycle_length++;
            }
            if (cycle_length>maximum_cycle_length) maximum_cycle_length = cycle_length;
        }
        printf("%d %d %d", n, m, maximum_cycle_length);//final output
    } else return 1;
    return 0;
}
int main() {
    int n, m, max;//variable declaration
    scanf("%d %d", &n, &m);
    calculate_maximum_cycle_length(n, m);//function call
    return 0;
}