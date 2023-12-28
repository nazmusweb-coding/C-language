// Create a structure to store vectors. then make a fucntion to return sum of 2 vectors
// important
#include <stdio.h>
typedef struct vectors
{
    float x;
    float y;
    float sum;
} vec;

void scanInfo (vec *vector, vec *vector2)
{
    scanf("%f%f", &vector->x, &vector->y);
    scanf("%f%f", &vector2->x, &vector2->y);
}

void vector_summation (vec vector1, vec vector2, vec sum)
{
    sum.x = vector1.x+vector2.x;
    sum.y = vector1.y+vector2.y;
    printf("Sum of x = %0.2f\nSum of y = %0.2f\n", sum.x, sum.y);
}

int main ()
{
    vec vector1, vector2;
    vec sum = {0};

    scanInfo(&vector1, &vector2);
    vector_summation(vector1, vector2, sum);

    return 0;
}

/*
    vector 1 = Xi + Yj 
    vector 2 = X'i + Y'j
    sum of vector 1 and 2 = (X+X')i + (Y+Y')j (sum of both axis in icap and jcap)
*/