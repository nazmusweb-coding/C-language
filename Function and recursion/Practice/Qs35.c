// qs 33 in video
// Write a function to calculate percentage of a student from Marks in Science, Math & Islam.
#include<stdio.h>
// function declaration(with parameters)/prototype
float percentage(float s, float m, float i);

int main() {
    float s, m, i;
    printf("Enter marks of Science: ");
    scanf("%f", &s);
    printf("Enter marks of Math: ");
    scanf("%f", &m);
    printf("Enter marks of Islam: ");
    scanf("%f", &i);
    // function call(with arguments)
    printf("Total Percentage: %0.1f%%", percentage(s, m, i));
    return 0;
}

// function definition(with parameters)
float percentage(float s, float m, float i) {
    float percentage = ((s+m+i)/300)*100;
    return percentage;
}