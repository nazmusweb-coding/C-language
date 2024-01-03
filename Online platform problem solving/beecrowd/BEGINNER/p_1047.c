// my logic is okay, i can write a working program and solve problem
// but i need to work on my logic and efficiency to code smartly in lese line
// i will develop this one further more
// work in progress
// update-1 avoided magic numbers
// update-2 avoided redundant Comments
// update-3 used Block Comments for Section Headers to help the reader to know about the perticular module of function
// update-4 used space between operators for more readability

#include <stdio.h>
#define MIN_HOURS 0
#define MIN_MINUTES 0
#define MID_HOURS 12
#define MAX_HOURS 24
#define MAX_MINUTES 60

/*
 * Function to calculate the time difference between two given time points.
 * Returns 0 on success, 1 on error.
 */
int time (int beginning_hour, int beginning_minute, int ending_hour, int ending_minute)
{
    int hours, mins;
    // for beginning_houring (1PM-11PM) and ending_houring (12AM-12PM) in case of more than 12 hours
    if ((beginning_hour > MID_HOURS && beginning_hour < MAX_HOURS) && (ending_hour < MID_HOURS && ending_hour >= MIN_HOURS))
    {
        hours = MAX_HOURS - beginning_hour + ending_hour;
    }
    // for beginning_houring (12AM-12PM) and ending_houring (1PM-11PM) in case of more than 12 hours
    else if ((beginning_hour <= MID_HOURS && beginning_hour >= MIN_HOURS) && (ending_hour >= MID_HOURS && ending_hour < MAX_HOURS))
    {
        hours = ending_hour - beginning_hour;
    }
    // for equal beginning_hour and ending_hour but it is less than 1 hour
    else if (beginning_hour == ending_hour && beginning_minute < ending_minute)// this will limit this function in 24 hours
    {
        hours = MIN_HOURS;
    }
    // for equal beginning_hour and ending_hour (1pm=1pm) in case of exact 24 hours
    else if (beginning_hour == ending_hour)
    {
        hours = MAX_HOURS;
    }
    // for same range of beginning_hour(12am-12pm) and ending_hour(12am-12pm) in case of equal to or less than 12 hours
    else if ((beginning_hour <= MID_HOURS && beginning_hour >= MIN_HOURS) && (ending_hour <= MID_HOURS && ending_hour >= MIN_HOURS))
    {
        if (beginning_hour > ending_hour)
        {
            hours = MAX_HOURS - (beginning_hour - ending_hour);//for bigger beginning_hour(10am) and smaller ending_hour(8am)
        }
        else
        {
            hours = ending_hour - beginning_hour;//for smaller beginning_hour(8am) and bigger ending_hour(10am)
        }
    }
    // for same range of beginning_hour(1pm-11pm) ane ending_hour(1pm-11pm) in case of equal to or less than 12 hours
    else if ((beginning_hour > MID_HOURS && beginning_hour < MAX_HOURS) && (ending_hour > MID_HOURS && ending_hour < MAX_HOURS))
    {
        if (beginning_hour > ending_hour) 
        {
            hours = MAX_HOURS - (beginning_hour - ending_hour);//for bigger beginning_hour(14pm) and smaller ending_hour(13pm)
        }
        else 
        {
            hours = ending_hour - beginning_hour;//for smaller beginning_hour(13pm) and bigger ending_hour(14pm)
        }
    }
    else 
    {
        printf("Wrong Hours\n");
        return 1;
    }
    
    if (beginning_minute == ending_minute)
    {
        mins = MIN_MINUTES;
    }
    else if ((beginning_minute>ending_minute) && ((beginning_minute >= MIN_MINUTES && beginning_minute < MAX_MINUTES) && (ending_minute >= MIN_MINUTES && ending_minute < MAX_MINUTES)))
    {
        mins = MAX_MINUTES - (beginning_minute - ending_minute);
        hours--;
    }
    else if ((beginning_minute < ending_minute) && ((beginning_minute >= MIN_MINUTES && beginning_minute < MAX_MINUTES) && (ending_minute >= MIN_MINUTES && ending_minute < MAX_MINUTES)))
    {
        mins = ending_minute - beginning_minute;
    }
    else
    {
        printf("Wrong Minutes\n");
        return 1;
    }
    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", hours, mins);
    
    return 0;
}

int main ()
{
    int beginning_hour, beginning_minute, ending_hour, ending_minute;
    scanf("%d%d%d%d", &beginning_hour, &beginning_minute, &ending_hour, &ending_minute);
    time(beginning_hour, beginning_minute, ending_hour, ending_minute);
    
    return 0;
}