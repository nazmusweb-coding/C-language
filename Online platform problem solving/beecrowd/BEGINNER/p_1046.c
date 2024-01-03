#include <stdio.h>

int time (int start, int end, int duration)
{
    if (start==end)
    {
        duration=24;
    }
    else if ((start>=13 && start<24) && (end<13 && end>=0))
    {
        duration=24-start+end;
    }
    else if ((start<13 && start>=0) && (end>=13 && end<24))
    {
        duration=end-start;
    }
    else if ((start<13 && start>=0) && (end<13 && end>=0))
    {
        if (start>end) duration=24-(start-end);
        else duration=end-start;
    }
    else if ((start>12 && start<24) && (end>12 && end<24))
    {
        if (start>end) duration=24-(start-end);
        else duration=end-start;
    }
    else 
    {
        printf("Wrong Hours\n");
        return 1;
    }
    printf("O JOGO DUROU %d HORA(S)\n", duration);
    
    return 0;
}

int main ()
{
    int start, end, duration;
    scanf("%d%d", &start, &end);
    time(start, end, duration);
    
    return 0;
}