// Write a C program to count frequency of each character in a string
// 2nd way
#include <stdio.h>

//counts the frequency of every character in the string
void count_2ndway (char string[], int frequency[])
{
    for (int i = 0; string[i]!='\n'; i++)
    {
        if (string[i]>='a' && string[i]<='z')
        {
            //if a then 97-97= 0 at 0 index of frequency im storing 'a''s occurrence
            //if d then 100-97 = 3 at 3 index of frequency im storing 'd''s occurrence and so on...
            frequency[string[i]-97]++;
        }
        else if (string[i]>='A' && string[i]<='Z')
        {
            //if A then 65-65= 0 at 0 index of frequency im storing 'a''s occurrence
            //if D then 68-65 = 3 at 3 index of frequency im storing 'd''s occurrence and so on...
            frequency[string[i]-65]++;
        }
        
    }
    
}

//prints the frequencies of every character in the string
void printInfo_2ndway (int frequency[])
{
    for (int i = 0; i < 26; i++)
    {
        if (frequency[i]!=0)
        {
            // i+97 means lowercase alphabets by serial
            printf("'%c' = %d\n", (i+97), frequency[i]);
        }
        
    }
    
}

int main ()
{
    char string[100];
    int frequency[26] = {0};//initialized every index value with zero

    printf("Input String: ");
    fgets(string, sizeof(string), stdin);

    count_2ndway(string, frequency);
    printInfo_2ndway(frequency);


    return 0;
}