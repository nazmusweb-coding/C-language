// qs 32 in video
// Write a function to convert celsius to fahrenheit.
#include <stdio.h>
// function declaration/prototype
double celsiustofahrenheit(double fahrenheit);

void main() {
    // took user input of celsius in double type, because if the user input decimal value i need to read them. I could have used float, but like double more.
    double celsius;
    printf("Enter temperature in celsius: ");
    scanf("%lf", &celsius);
    // printing converted value for 2 decimal, i need accurate value.
    // function call
    printf("Temperature: %0.2lf", celsiustofahrenheit(celsius));
}
//c/5=(f-32)/9
//(9c/5)+32=f
// double have high space so anwers will always get transformed into double type
// function definition
double celsiustofahrenheit(double fahrenheit) {
    // fhrenheit is double because inputed value should be able to read decimal vaules.
    double temperature = ((9*fahrenheit)/5)+32;
    return temperature;
}