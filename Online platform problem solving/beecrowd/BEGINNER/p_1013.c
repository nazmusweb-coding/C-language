// important
#include <stdio.h>
#include <stdlib.h>
 
int main() {
 
    int a, b, c, maiorab;
    scanf("%d%d%d", &a, &b, &c);
    maiorab = (a+b+abs(a-b))/2;
    maiorab = (c+maiorab+abs(c-maiorab))/2;
    printf("%d eh 0 maior\n", maiorab);
 
    return 0;
}

/* Here i learnd about abs function of stdlib library,
    here is also some little introdution to math that
    explains you can do anything with maths in just a
    few lines of code
*/
// abs is like modules|-1|=1 non negativity