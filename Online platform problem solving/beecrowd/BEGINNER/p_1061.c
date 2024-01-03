#include <stdio.h>
 
int main() {
 
    int day, day1, day2, hr, hr1, hr2, min, min1, min2, sec, sec1, sec2;
    char s[3];

    scanf("%s%d", s, &day1);
    scanf("%d%d%d", &hr1, &min1, &sec1);
    scanf("%s%d", s, &day2);
    scanf("%d%d%d", &hr2, &min2, &sec2);
    
    day = day2 - day1;
    if (hr1==hr2)
    {
        hr = 0;
    }
    else if (hr1>hr2)
    {
        hr = 24 - (hr1-hr2);
        day--;
    }
    else hr = hr2-hr1;
    
    if (min1==min2)
    {
        min = 0;
    }
    else if (min1>min2)
    {
        min = 60 - (min1-min2);
        hr--;
    }
    else min = min2-min1;
    
    if (sec1>sec2)
    {
        sec = 60 - (sec1-sec2);
        min--;
    }
    else sec = sec2-sec1;
    
    printf("%d dia(s)\n", day);
    printf("%d hora(s)\n", hr);
    printf("%d minuto(s)\n", min);
    printf("%d segundo(s)\n", sec);
 
    return 0;
}