/* Theoretical Question
    
    You have to store the marks of 30 students in class 
    What will you use?
    
    a. array of 30 floats
    b. sturcture
    
    ans: a bcause we just have to store marks of 30 students so it better
    to choose array of 30 floats, but we can use both, we use structure to 
    store different types of data, but here we are storing only one type.
*/
// array of 30 floats
#include <stdio.h>
int main ()
{
    float numbers[30] = {12.2, 21.3, 49.3, 19.9, 34, 34, 12, 23, 34, 43.3,
                        13.1, 29.5, 30, 12.3, 38, 10.4, 43.1, 12, 21, 12,
                        45, 2, 0, 12, 43, 19.4, 12, 23, 12, 21};                  
    for (int i = 0; i < 30; i++)
    {
        printf("%dth student's mark: %0.1f\n", i+1, numbers[i]);
    }
    
    return 0;
}