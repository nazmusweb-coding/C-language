// Time Conversion
#include <stdio.h>
 
int main() {
 
    int a, hrs, mins, secs;
    scanf("%d", &a);
    hrs = a/3600;
    a = a % 3600;
    mins = a/60;
    a = a % 60;
    secs = a;
    printf("%d:%d:%d\n", hrs, mins, secs);
    
    return 0;
}